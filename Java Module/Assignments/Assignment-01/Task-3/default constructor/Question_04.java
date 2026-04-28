
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
@Override
public String toString() {
    return "id: "+this.id+"\nname: "+this.name+
    "\nsalary: "+this.salary+"/-";
}

}

public class Question_04 {
    public static void main(String[] args) {
       Employee e1=new Employee();
System.out.println(e1.toString());
    }
}
