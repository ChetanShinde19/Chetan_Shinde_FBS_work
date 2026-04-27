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
void display(){
System.out.println("BankAccount details:");
System.out.println("account number: "+ accountNumber);
System.out.println("name: "+ holderName);
System.out.println("balance: "+ currentBalance+"/-");
System.out.println("interest rate: "+ interestRate+"%");
}
}

public class Question_08 {
    public static void main(String[] args) {
        BankAccount ba1 = new BankAccount(10255126822L,"Chetan Shinde",201251,2.3);

        ba1.display();
    }
}
