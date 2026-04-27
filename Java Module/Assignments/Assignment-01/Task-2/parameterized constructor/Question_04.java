
class Employee {

 int id;
 String name;
double salary;
Employee(int id,String name,double salary)
{
    this.id=id;
    this.name=name;
    this.salary=salary;
}

void display(){
System.out.println("Employee info:");
System.out.println("id: "+ id);
System.out.println("Employee name: "+ name);
System.out.println("salary: "+ salary+"/-");

}
}

public class Question_04 {
    public static void main(String[] args) {
        Employee e1=new Employee(101,"Chetan Shinde",8000);
        e1.display();
    }
}
