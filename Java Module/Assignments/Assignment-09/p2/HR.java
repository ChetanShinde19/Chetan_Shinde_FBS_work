package p2;

import p1.Employee;
public class HR extends Employee {
	double commission;

	public HR(int id, String name, double salary, double commission) {
		super(id, name, salary);
		this.commission = commission;
	}

	public double getCommission() {
		return commission;
	}

	public void setCommission(double commission) {
		this.commission = commission;
	}

	@Override
	public double calSal()
	{
		return salary + commission;
	}
	
	@Override
	public String toString() {
		return "HR [commission=" + commission + ", id=" + id + ", name=" + name + ", salary=" + salary + "]";
	}
	
}
