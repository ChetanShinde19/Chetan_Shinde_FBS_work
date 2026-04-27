
class HR {

 int id;
 String name;
double salary;
double commission;
double allowance;

HR(){
    this.id=101;
    this.name="chetan shinde";
    this.salary=80000;
    this.commission=9000;
    this.allowance=2000;
}
void display(){
System.out.println("Admin info:");
System.out.println("Id: "+ id);
System.out.println("Name: "+ name);
System.out.println("salary: "+ salary);
System.out.println("commission: "+ commission);
System.out.println("allowance: "+ allowance);

}
}


public class Question_07 {
    public static void main(String[] args) {
    HR h1=new HR();
    h1.display();
    }
}

