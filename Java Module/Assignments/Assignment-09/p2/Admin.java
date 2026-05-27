package p2;
import p1.Employee;
public class Admin extends Employee{
	public double allowance;

	public Admin(int id, String name, double salary, double allowance) {
		super(id, name, salary);
		this.allowance = allowance;
	}

	public double getAllowance() {
		return allowance;
	}

	public void setAllowance(double allowance) {
		this.allowance = allowance;
	}

	@Override
	public double calSal()
	{
		return allowance +  salary;
	}
	@Override
	public String toString() {
		return "Admin [allowance=" + allowance + ", id=" + id + ", name=" + name + ", salary=" + salary + "]";
	}
}
