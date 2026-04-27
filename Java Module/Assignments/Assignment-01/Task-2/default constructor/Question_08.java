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
        BankAccount ba1 = new BankAccount();

        ba1.display();
    }
}
