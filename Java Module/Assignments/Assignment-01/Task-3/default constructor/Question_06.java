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
@Override
public String toString() {
    return "id: "+this.id+"\nName: "+this.name+"\nSalary: "+this.salary+"/-"+
    "\nIncentive: "+this.Incentive+"/-"+"\ntarget: "+this.target+"/-";
}

}
public class Question_06 {
public static void main(String[] args) {
       SalesManager sm1 = new SalesManager();
       System.out.println(sm1.toString());
    }    
}
