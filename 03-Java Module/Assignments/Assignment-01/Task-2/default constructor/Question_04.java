
class Employee {

 int id;
 String name;
double salary;
Employee()
{
    this.id=101;
    this.name="chetan shinde";
    this.salary=80000;
}

void display(){
System.out.println("Employee info:");
System.out.println("id: "+ id);
System.out.println("Employee name: "+ name);
System.out.println("salary: "+ salary);

}
}

public class Question_04 {
    public static void main(String[] args) {
       Employee e1=new Employee();
e1.display();
    }
}
