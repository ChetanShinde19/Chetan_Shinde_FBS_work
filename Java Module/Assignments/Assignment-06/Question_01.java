abstract class Payment {
	protected String paymentId;
	protected double amount;
	protected String payerName;
	protected String status;
	static int count=1;
	public Payment(String paymentId, double amount, String payerName, String status) {
		this.paymentId = paymentId;
		this.amount = amount;
		this.payerName = payerName;
		this.status = status;
	}

	void printSummary() {
		System.out.printf("\n%d)Payment Summary:-",count++);
		System.out.println("\nPayment Id: " + paymentId);
		System.out.println("Amount: " + amount);
		System.out.println("Payer Name: " + payerName);
		System.out.println("Status: " + status);
	}

	final void process() {
		System.out.println("\nProcessing the Payment...");

		if (validate()) {
			deductAmount();
			sendNotification();
			status = "SUCCESS";
			System.out.println("PAYMENT SUCCESSFULL...");
		} else {
			status = "FAILED";
			System.out.println("PAYMENT FAILED...");
		}
	}

	abstract boolean validate();

	abstract void sendNotification();

	abstract void deductAmount();

}


class CardPayment extends Payment {
	private String cardNumber;
	private String cvv;

	public CardPayment(String paymentId, double amount, String payerName, String status, String cardNumber, String cvv) {
		super(paymentId, amount, payerName, status);
		this.cardNumber = cardNumber;
		this.cvv = cvv;
	}

	@Override
	boolean validate() {
		if (cardNumber.length() == 16 && cvv.length() == 3 && amount > 0) {
			return true;
		}
		else {
		return false;
	}
	}

	@Override
	void deductAmount() {
		System.out.println("Amount Deduction: "+amount+"\nAmount Deducted using Card Payment...");
	}

	@Override
	void sendNotification() {
		System.out.println("SMS Notification sent for card payment...");
	}

}


class UPIPayment extends Payment {
	String upiId;

	public UPIPayment(String paymentId, double amount, String payerName, String status, String upiId) {
		super(paymentId, amount, payerName, status);
		this.upiId = upiId;
	}
//	
//	System.out.println("");
//	
	@Override
	boolean validate() {
		if(upiId.contains("@") && amount>=1 && amount<=100000) {
			return true;
		}
		else {
		return false;
	}
	}
	
@Override
	void deductAmount() {
	System.out.println("Amount Deduction: "+amount+"\nAmount Deducted using UPI ...");

	}
	@Override
	void sendNotification() {
		System.out.println("UPI payment Notification sent...");

	}
}

public class Question_01 {

    public static void main(String[] args) {

        Payment p1 =new CardPayment("P101",5000,"Rahul","PENDING","1234567812345678","123");

        Payment p2 =new UPIPayment("P102",2500,"Priya","PENDING","priya@upi");

        Payment p3 =new CardPayment("P103",-500,"Amit","PENDING","1234","12");

        Payment p4 =new UPIPayment("P104",150000,"Neha","PENDING","nehaupi");

        p1.process();
        p1.printSummary();

        p2.process();
        p2.printSummary();

        p3.process();
        p3.printSummary();

        p4.process();
        p4.printSummary();
    }
}