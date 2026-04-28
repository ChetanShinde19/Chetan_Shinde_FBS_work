class libraryFine{
	int id;
	String userName;
	int daysLate;
	static double fineCharge=25;
	public libraryFine(int id,String userName, int daysLate) {
		this.id=id;
		this.userName = userName;
		this.daysLate = daysLate;
	}
	
	public static void updatedFineCharges(double charge) {
		fineCharge =charge;
		System.out.println("Updated charges: "+fineCharge);
	}
	double calculateFine() {
		return daysLate * fineCharge;
	}
	void displayUserFine()
	{
		System.out.println("\nLibrary User: ");
		System.out.println("User id: "+this.id);
		System.out.println("User Name: "+this.userName);
		System.out.println("No.of Days: "+this.daysLate);
		System.out.println("Fine: "+calculateFine());
	}
}
public class libraryUser {

	public static void main(String[] args) {
		libraryFine user1=new libraryFine(19, "Chetan shinde", 12);
		libraryFine user2=new libraryFine(12, "Vaibhav Shinde", 5);
		
		System.out.println("Initial Charges: ");
		user1.displayUserFine();
		user2.displayUserFine();
		
		
	}

}
