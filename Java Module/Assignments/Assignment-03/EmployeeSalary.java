class employeeSalaryCalacualtion{
	static double bonusRate=10;
	double salary;
	String employeeName;
	
	public employeeSalaryCalacualtion(String employeeName, double salary) {
		this.employeeName = employeeName;
		this.salary = salary;
	}
	
	public static void updatedBonusRate(double newBonusRate) {
		bonusRate=newBonusRate;
		System.out.println("Updated Bonus Rate of employees:"+bonusRate);
	}
	
	double calculateSalary() {
		return salary+(salary*bonusRate/100);
	}
	
	void displayBonusRate() {
		System.out.println("\nEmployee Bonus Rate info: ");
		System.out.println("Name: "+this.employeeName);
		System.out.println("Salary: "+this.salary);
		System.out.println("Current bonus: "+bonusRate+"%");
		System.out.println("Updated salary: "+this.calculateSalary());
	}
	}


public class EmployeeSalary {

	public static void main(String[] args) {
employeeSalaryCalacualtion employee1=new employeeSalaryCalacualtion("Chetan shinde", 80000);
employeeSalaryCalacualtion employee2=new employeeSalaryCalacualtion("Pratik Jadhav", 20000);		
	System.out.println("Initial bonus rate: ");
	employee1.displayBonusRate();
	employee2.displayBonusRate();
	
	employeeSalaryCalacualtion.updatedBonusRate(50);
	System.out.println("Updated salary: ");
	employee1.displayBonusRate();
	employee2.displayBonusRate();
	
	}
}
