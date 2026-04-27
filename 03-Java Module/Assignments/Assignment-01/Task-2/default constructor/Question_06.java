class SalesManager {
 int id;
 String name;
double salary;
double Incentive;
int target;

SalesManager(){
this.id=101;
this.name="chetan shinde";
this.salary=90000;
this.Incentive=8000;
this.target=100;
}

void display(){
System.out.println("Salesmanager info:");
System.out.println("Id:fr"+ id);
System.out.println("Name: "+ name);
System.out.println("salary: "+ salary+"/-");
System.out.println("Incentive: "+ Incentive+"/-");
System.out.println("target: "+ target+"/-");

}   
}
public class Question_06 {
public static void main(String[] args) {
       SalesManager sm1=new SalesManager();
       sm1.display();
    }    
}
