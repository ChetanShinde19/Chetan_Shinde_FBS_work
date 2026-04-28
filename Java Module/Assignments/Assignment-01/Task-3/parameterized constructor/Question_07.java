
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
@Override
public String toString() {
    return "id: "+this.id+"\nname: "+this.name+
    "\nsalary: "+this.salary+"/-"+"\nCommission: "+this.commission+"/-"
    +"\nAllowance: "+this.allowance+"/-";

}

}


public class Question_07 {
    public static void main(String[] args) {
    HR h1=new HR(101,"Chetan shinde",70000,7500,8000);
    System.out.println(h1);
    }
}
