package p3;
import p1.Employee;
import p2.*;
public class Test {

	public static void main(String[] args) {
		Employee emp[] = new Employee[3];
		
		emp[0] = new HR(101, "Rahul", 50000, 10000);
        emp[1] = new SalesManager(102, "Amit", 60000, 15000, 20000);
        emp[2] = new Admin(103, "Priya", 45000, 8000);
        
        for(Employee e:emp)
        {
        	System.out.println(e);
        	System.out.println("Calculated salary: "+e.calSal());
        	System.out.println( "-------------------------------------------------------------------------------------------");
        }
       
	}
}
