
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
@Override
public String toString() {
    return "id: "+this.id+"\nname: "+this.name+
    "\nsalary: "+this.salary+"/-"+"\nCommission: "+this.commission+"/-"
    +"\nAllowance: "+this.allowance+"/-";

}

}


public class Question_07 {
    public static void main(String[] args) {
    HR h1=new HR();
    System.out.println(h1.toString());
    }
}

