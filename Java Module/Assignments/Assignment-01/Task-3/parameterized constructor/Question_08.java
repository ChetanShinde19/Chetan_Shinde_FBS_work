class BankAccount {
    long accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;

BankAccount(long accountNumber,String holderName,double currentBalance,double interestRate)
{
    this.accountNumber=accountNumber;
    this.holderName=holderName;
    this.currentBalance=currentBalance;
    this.interestRate=interestRate;
    
}
@Override
public String toString() {
    return "Account Name: "+this.accountNumber+"\nHolder Name: "+this.holderName
    +"\nCurrent balance: "+this.currentBalance+"/-"+"\nInterest rate: "+this.interestRate+"%";
}
}

public class Question_08 {
    public static void main(String[] args) {
        BankAccount ba1 = new BankAccount(10255126822L,"Chetan Shinde",201251,2.3);

        System.out.println(ba1);
    }
}
