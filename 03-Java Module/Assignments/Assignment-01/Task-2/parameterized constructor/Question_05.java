
class HR {

 int id;
 String name;
double salary;
double commission;

HR(int id,String name,double salary,double commission){
this.id=id;
this.name=name;
this.salary=salary;
this.commission=commission;
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
       HR h1=new HR(101,"Chetan  Shinde",700000,8000);
        h1.display();
    }
}
