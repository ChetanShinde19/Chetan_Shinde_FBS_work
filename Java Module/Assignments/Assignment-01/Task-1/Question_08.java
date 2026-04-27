class BankAccount {
    int accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;

    void setaccountNumber(int acc) {
        this.accountNumber = acc;
    }

    void setholderName(String name) {
        this.holderName = name;
    }

    void setcurrentBalance(double balance) {
        this.currentBalance = balance;
    }

    void setinterest(double interestrate) {
        this.interestRate = interestrate;
    }

    int getaccountNumber(){
        return accountNumber;
    }

    String getholderName(){
        return holderName;
    }

    double getcurrentBalance(){
        return currentBalance;
    }

    double getinterestRate(){
        return interestRate;
    }

void display(){
System.out.println("BankAccount details:");
System.out.println("account number: "+ getaccountNumber());
System.out.println("name: "+ getholderName());
System.out.println("balance: "+ getcurrentBalance()+"/-");
System.out.println("interest rate: "+ getinterestRate()+"%");
}
}

public class Question_08 {
    public static void main(String[] args) {
        BankAccount ba1 = new BankAccount();
        ba1.setaccountNumber(102025212);
        ba1.setholderName("chetan shinde");
        ba1.setcurrentBalance(8000);
        ba1.setinterest(2.5);
        ba1.display();
    }
}
