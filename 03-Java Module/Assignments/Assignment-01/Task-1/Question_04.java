
class Employee {

 int id;
 String name;
double salary;


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

void display(){
System.out.println("Employee info:");
System.out.println("id: "+ getid());
System.out.println("Employee name: "+ getname());
System.out.println("salary: "+ getsalary());

}
}

public class Question_04 {
    public static void main(String[] args) {
       Employee e1=new Employee();
       e1.setid(19); 
       e1.setname("Chetan Shinde");
       e1.setsalary(80000);
e1.display();
    }
}
