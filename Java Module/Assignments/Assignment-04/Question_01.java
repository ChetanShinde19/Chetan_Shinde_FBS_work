class Employee
{
	private int id;
	private String name;
	private double salary;
	
	
	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public double getSalary() {
		return salary;
	}

	public void setSalary(double salary) {
		this.salary = salary;
	}

	Employee(){
		this.id=0;
		this.name="Not Given";
		this.salary=0;
	}
	Employee(int id, String name, double salary) {
		this.id = id;
		this.name = name;
		this.salary = salary;
	}
public void display() {
	
	System.out.println("Id: "+getId());
	System.out.println("Name: "+getName());
	System.out.println("Salary: "+getSalary()+"/-");
}
	
}

//Admin
class Admin extends Employee
{
	private double allowance;
	
	public double getAllowance() {
		return allowance;
	}
	public void setAllowance(double allowance) {
		this.allowance = allowance;
	}
	
	Admin(){
		super();
		this.allowance=0;
	}
	Admin(int id,String name,double salary,double allowance) {
		super(id,name,salary);
		this.allowance=allowance;
	}
	@Override
	public void display()
	{
		super.display();
		System.out.println("Allowance: "+getAllowance());
	}
}

///sales manager
class SalesManager extends Employee
{
	private double incentive;
	private int target;
	public double getIncentive() {
		return incentive;
	}
	public void setIncentive(double incentive) {
		this.incentive = incentive;
	}
	public int getTarget() {
		return target;
	}
	public void setTarget(int target) {
		this.target = target;
	}
	public SalesManager() {
		super();
		this.incentive=0;
		this.target=0;
	}
	
	SalesManager(int id, String name, double salary,double incentive,int target) 
	{
		super(id, name, salary);
		this.incentive=incentive;
		this.target=target;
	}
	@Override
	public void display()
	{
		super.display();
		
		System.out.println("Incentive: "+getIncentive()+"/-");
		System.out.println("Target: "+getTarget());
	}
}

//HR
class HR extends Employee
{
	private double commission;
	
	
	public double getCommission() {
		return commission;
	}


	public void setCommission(double commission) {
		this.commission = commission;
	}

	HR() {
		super();
		this.commission=0;
	}
	HR(int id, String name, double salary,double commission) {
		super(id, name, salary);
		this.commission=commission;
	}	
	@Override
	public void display()
	{
		super.display();
		System.out.println("Commission: "+getCommission()+"/-");
	}
}

public class Question_01 {

	public static void main(String[] args) {
		
		Admin admin1 = new Admin(1,"Chetan Shinde",90000,2000);
		SalesManager salesmanager1= new SalesManager(2, "Pratik Jadhav", 20000, 800,2 );
		HR hr1=new HR(201, "Mahesh", 80020, 5000);
		
		System.out.println("Employee Details: ");
		System.out.println("Admin: ");
		admin1.display();
		System.out.println();
		
		System.out.println("SalesManager: ");
		salesmanager1.display();
		System.out.println();
		
		System.out.println("HR: ");
		hr1.display();
		System.out.println();
	}

}
