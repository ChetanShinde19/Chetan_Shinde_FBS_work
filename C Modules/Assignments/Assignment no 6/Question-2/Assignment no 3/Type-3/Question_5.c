// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
#include<stdio.h>
int armstrong()
{
    int n,i,j,sum=0;
    printf("Enter number:");
    scanf(" %d", &n);
    i=n;
    while (i>0)
    {
        j=i%10;
        sum=sum+(j*j*j);
        i=i/10;
        /* code */
    }
    if (sum==n)
    {
        return 0;
        /* code */
    }
    else{
        return 1;
    }
}
int main()
{
   int result=armstrong();
    if (result==0)
    {
        printf(" is armastrong number");
        /* code */
    }
    else{
        printf(" is not armstrong numb");
    }
    return 0;
    
}