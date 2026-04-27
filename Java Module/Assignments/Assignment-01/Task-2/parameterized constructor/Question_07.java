
class HR {

 int id;
 String name;
double salary;
double commission;
double allowance;

HR(int id,String name,double salary,double commission,double allowance){
    this.id=id;
    this.name=name;
    this.salary=salary;
    this.commission=commission;
    this.allowance=allowance;
}
void display(){
System.out.println("Admin info:");
System.out.println("Id: "+ id);
System.out.println("Name: "+ name);
System.out.println("salary: "+ salary+"/-");
System.out.println("commission: "+ commission+"/-");
System.out.println("allowance: "+ allowance+"/-");

}
}


public class Question_07 {
    public static void main(String[] args) {
    HR h1=new HR(101,"Chetan shinde",70000,7500,8000);
    h1.display();
    }
}

