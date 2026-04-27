class SalesManager {
    int id;
    String name;
    double salary;
    double Incentive;
    int target;

    void setid(int i) {
        this.id = i;
    }

    void setname(String n) {
        this.name = n;
    }

    void setsalary(double sal) {
        this.salary = sal;
    }

    void setincentive(double incen) {
        this.Incentive = incen;
    }

    void settarget(int tar) {
        this.target = tar;
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

    double getIncentive() {
        return Incentive;
    }

    int gettarget() {
        return target;
    }

    void display() {
        System.out.println("Salesmanager info:");
        System.out.println("Id: " + getid());
        System.out.println("Name: " + getname());
        System.out.println("salary: " + getname());
        System.out.println("Incentive: " + getsalary());
        System.out.println("target: " + gettarget());

    }
}

public class Question_06 {
    public static void main(String[] args) {
        SalesManager sm1 = new SalesManager();
        sm1.setid(19);
        sm1.setname("Chetan Shinde");
        sm1.setsalary(80000);
        sm1.setincentive(1000);
        sm1.settarget(15);
        sm1.display();
    }
}
