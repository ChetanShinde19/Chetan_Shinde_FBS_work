// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
#include<stdio.h>
int main()
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
        printf("%d is armastrong number",n);
        /* code */
    }
    else{
        printf("%d is not armstrong numb",n);
    }
    return 0;
    
}