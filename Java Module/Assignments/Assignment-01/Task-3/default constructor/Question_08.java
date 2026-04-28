class BankAccount {
    int accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;

BankAccount()
{
    this.accountNumber=201081541;
    this.holderName="Chetan shinde";
    this.currentBalance=900000;
    this.interestRate=2.4;
    
}
@Override
public String toString() {
    return "Account Name: "+this.accountNumber+"\nHolder Name: "+this.holderName
    +"\nCurrent balance: "+this.currentBalance+"/-"+"\nInterest rate: "+this.interestRate+"%";
}
}

public class Question_08 {
    public static void main(String[] args) {
        BankAccount ba1 = new BankAccount();

        System.out.println(ba1.toString());
    }
}
