import java.util.Scanner;
abstract class ElectricityBill
{
	String customerName;
	double units;
	public ElectricityBill(String customerName, double units) {
		super();
		this.customerName = customerName;
		this.units = units;
	}
	void showUsage()
	{
		System.out.println("=====Electricity Bill=====");
		System.out.println("\nCustomer Name: "+customerName);
		System.out.println("Units Consumed: "+units);
	}
	abstract double calculateBill();
	final void generateBill()
	{
		double billAmount = calculateBill();
		
		double tax = billAmount * 0.05;
		
		double fixedCharge = 50;
		
		double finalBillAmount = billAmount + fixedCharge + tax;
		
		showUsage();
		System.out.println("Base Bill : Rs."+billAmount);
		System.out.println("Tax(5%)	  : Rs."+tax);
		System.out.println("Fixed Charge : Rs."+fixedCharge);
		System.out.println("-------------------------------------------");
		System.out.println("Total Bill Amount : Rs."+finalBillAmount);

	}
}

class ResidentialBill extends ElectricityBill
{

	public ResidentialBill(String customerName, double units) {
		super(customerName, units);
	}

	@Override
	double calculateBill() {
		
		double amount = 0 ;
		if(units <= 100){
			amount = units * 2.5;
		}
		else if (units <=300) {
			amount = units * 3.5;
		}
		else if (units >300) {
			amount = units * 5;
		}
		
		if (units >500) {
			amount = amount +150;
		}
		return amount;
	}
	
	
}

class CommercialBill extends ElectricityBill
{

	public CommercialBill(String customerName, double units) {
		super(customerName, units);
	}

	@Override
	double calculateBill() {
		double amount = units * 6.5;
				if(units <200 && amount <1500)
				{
					amount = 1500;
				}
				
				if (units >1000) {
					double supercharge = amount * 0.08;
					amount =amount+supercharge;
				}
		return amount;
	}
	
}
public class Question_02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        ElectricityBill bill = null;
        System.out.println("=====Electricity Bill System=====");
        
        System.out.println("1. Residential");
        System.out.println("2. Commercial");
        
        System.out.println("Select Customer Type: ");
        int choice = sc.nextInt();
        
        sc.nextLine();
        
        System.out.println("Enter the customer Name: ");
        String name =sc.nextLine();
        
        System.out.println("Enter the units consumed: ");
        double units = sc.nextDouble();
        
        if (choice == 1) {
			bill = new ResidentialBill(name, units);
		}
        else if(choice ==2)
        {
        	bill = new CommercialBill(name, units);
        }
        else if(choice >3){
        	System.out.println("Enter the Valid Input!!!");
        	
        }
        bill.generateBill();
        sc.close();
    }
}
