
class HR {

 int id;
 String name;
double salary;
double commission;

void setid(int i)
{
    this.id=i;
}

 void setname(String n)
{
    this.name=n;
}

void setsalary(double sal)
{
    this.salary=sal;
}

void setcommission(double comm)
{
    this.commission=comm;
}

 int getid()
{
    return id;
}

String getname()
{
    return name;
}
double getsalary()
{
    return salary;
}
double getcommission(){
    return commission;
}

void display(){
  System.out.println("HR info:");
        System.out.println("Id: " + getid());
        System.out.println("Name: " + getname());
        System.out.println("Salary: " + getsalary());
        System.out.println("Commission: " + getcommission());

}
}

public class Question_05 {
    public static void main(String[] args) {
       HR h1=new HR();
       h1.setid(19); 
       h1.setname("Chetan Shinde");
       h1.setsalary(80000);
       h1.setcommission(9000.202);
h1.display();
    }
}
