
class HR {

 int id;
 String name;
double salary;
double commission;

HR(){
this.id=101;
this.name="chetan shinde";
this.salary=90000;
this.commission=2000;
}
void display(){
System.out.println("HR info:");
System.out.println("Id: "+ id);
System.out.println("Name: "+ name);
System.out.println("salary: "+ salary+"/-");
System.out.println("commission: "+ commission+"/-");

}
}

public class Question_05 {
    public static void main(String[] args) {
       HR h1=new HR();
        h1.display();
    }
}
