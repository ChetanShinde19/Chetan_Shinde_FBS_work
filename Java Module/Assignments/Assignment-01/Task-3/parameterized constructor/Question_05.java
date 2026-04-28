
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
@Override
public String toString() {
    return "id: "+this.id+"\nname: "+this.name+
    "\nsalary: "+this.salary+"/-"+"\nCommission: "+this.commission+"/-";
}
}

public class Question_05 {
    public static void main(String[] args) {
       HR h1=new HR(101,"Chetan  Shinde",700000,8000);
         System.out.println(h1);
    }
}
