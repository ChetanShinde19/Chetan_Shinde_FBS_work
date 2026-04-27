class HR {

    int id;
    String name;
    double salary;
    double commission;
    double allowance;

    void setid(int i) {
        this.id = i;
    }

    void setname(String n) {
        this.name = n;
    }

    void setsalary(double sal) {
        this.salary = sal;
    }

    void setallowance(double allow) {
        this.allowance = allow;
    }

    int getid() {
        return id;
    }

    String getname() {
        return name;
    }

    double getsalary() {
        return salary;
    }

    double getallowance() {
        return allowance;
    }

    void display() {
        System.out.println("Admin info:");
        System.out.println("Id: " + getid());
        System.out.println("Name: " + getname());
        System.out.println("salary: " + getsalary());
        System.out.println("allowance: " + getallowance());

    }
}

public class Question_07 {
    public static void main(String[] args) {
        HR h1 = new HR();
        h1.setid(19);
        h1.setname("Chetan Shinde");
        h1.setsalary(80000);
        h1.setallowance(9000.202);
        HR h2 = new HR();
        h2.setid(19);
        h2.setname("vaibhav Shinde");
        h2.setsalary(80000);
        h2.setallowance(9000.202);

        h1.display();
        h2.display();
    }
}
