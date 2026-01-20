//  ATM Transaction

// Input balance and withdrawal amount:

// If withdrawal ≤ balance

// If withdrawal % 100 == 0

// Deduct amount

// Else → Invalid amount

// Else → Insufficient balance
#include<stdio.h>
int main()
{
    double balance;
    int withdrawal_amount;
    printf("enter the balance:\n");
    scanf(" %lf", &balance);
    printf("enter the withdrawal amount:");
    scanf(" %d",&withdrawal_amount);
    if (withdrawal_amount<=balance)
    {
        if (withdrawal_amount%100==0)
        {
            balance=balance-withdrawal_amount;
            printf("Transaction is successful\n");
            printf("remaining balance :%lf\n",balance);
            /* code */
        }
        else{
            printf("Invalid amount!!");
        }
    }
        else 
        {
            printf("Insufficient balance %.2ld",balance);
            /* code */
        }
        /* code */
    return 0;
} 