// 4. Even or Odd and Multiple of 5
// Read an integer:
// If number is even
// Check if it is divisible by 5
// Else
// Print "Odd number"

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf(" %d", &num);
    if (num%2==0){
        printf("it is even nummber\n");
        if (num%5==0)
        {
            printf("it is divisible by 5", &num);
            /* code */
        }
        else {
            printf("it is not divisible by 5 \n");
        }
    }
        else{
            printf("it is odd number");
        }
        return 0;
        /* code */
    }

    

