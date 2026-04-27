class SalesManager {
 int id;
 String name;
double salary;
double Incentive;
int target;

SalesManager(int id,String name,double salary,double Incentive,int target){
this.id=id;
this.name=name;
this.salary=salary;
this.Incentive=Incentive;
this.target=target;
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
       SalesManager sm1=new SalesManager(101,"chetan shinde",8000,80077,50);
       sm1.display();
    }    
}
