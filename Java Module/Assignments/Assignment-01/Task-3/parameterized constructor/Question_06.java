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

@Override
public String toString() {
    return "id: "+this.id+"\nName: "+this.name+"\nSalary: "+this.salary+"/-"+
    "\nIncentive: "+this.Incentive+"/-"+"\ntarget: "+this.target+"/-";
}

}
public class Question_06 {
public static void main(String[] args) {
        SalesManager sm1=new SalesManager(101,"chetan shinde",8000,80077,50);
       System.out.println(sm1);
    }    
}