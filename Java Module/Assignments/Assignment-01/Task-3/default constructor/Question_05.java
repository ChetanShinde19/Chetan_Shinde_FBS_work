
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

@Override
public String toString() {
    return "id: "+this.id+"\nname: "+this.name+
    "\nsalary: "+this.salary+"/-"+"\nCommission: "+this.commission+"/-";
}
}

public class Question_05 {
    public static void main(String[] args) {
       HR h1=new HR();
        System.out.println(h1.toString());
    }
}
