class Student {
    int rollNo;
    String name;
    double percentage;

    Student(int rollNo, String name, double percentage) {
        this.rollNo = rollNo;
        this.name = name;
        this.percentage = percentage;
    }
}

class Employee {
    int id;
    String name;
    long annualSalary;

    Employee(int id, String name, long annualSalary) {
        this.id = id;
        this.name = name;
        this.annualSalary = annualSalary;
    }
}

class Bank {
    void approveLoan(Student s) {
        System.out.println("Student Loan Info: ");
        System.out.println("id: " + s.rollNo);
        System.out.println("name: "+s.name);
        System.out.println("percentage: "+s.percentage+"%");
        if (s.percentage > 80) {
            System.out.println("Approved Loan Amount: $2,00,000");
        } else if (s.percentage >= 60) {
            System.out.println("Approved Loan Amount: $1,00,000");
        } else if (s.percentage >= 40) {
            System.out.println("Approved Loan Amount: $50,000");
        } else {
            System.out.println("Loan Not Approved");
        }
    }

    void approveLoan(Employee e) {
        System.out.println("\nEmployee Loan Info: ");
        System.out.println("id: " + e.id);
        System.out.println("name: " + e.name);
        System.out.println("annual Salary: " + e.annualSalary+"LPA");
        if (e.annualSalary > 12) {
            System.out.println("Approved Loan Amount: $7,00,000");
        } else if (e.annualSalary >= 10) {
            System.out.println("Approved Loan Amount: $6,00,000");
        } else if (e.annualSalary >= 6) {
            System.out.println("Approved Loan Amount: $5,00,000");
        } else if (e.annualSalary >= 4) {
            System.out.println("Approved Loan Amount: $4,00,000");
        }
        else {
            System.out.println("Loan Not Approved");
        }
    }
}

public class loan_approval_system {
    public static void main(String[] args) {
        Bank b =new Bank();
        Student s =new Student(10, "Chetan Shinde", 95);
        Employee e =new Employee(101, "Chetan shinde", 8L);
        b.approveLoan(s);
        b.approveLoan(e);
    }
}
