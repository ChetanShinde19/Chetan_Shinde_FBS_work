
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
@Override
public String toString() {
    return "id: "+this.id+"\nname: "+this.name+
    "\nsalary: "+this.salary+"/-";
}

}

public class Question_04 {
    public static void main(String[] args) {
        Employee e1=new Employee(101,"Chetan Shinde",8000);
 System.out.println(e1);       
    }
}
