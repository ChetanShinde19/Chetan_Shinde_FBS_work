// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
#include<stdio.h>
void armstrong(int n,int i,int j)
{
    int sum=0;
    i=n;
    while (i>0)
    {
        j=i%10;
        sum=sum+(j*j*j);
        i=i/10;
    }
    if (sum==n)
    {
        printf("%d is armastrong number",n);
    }
    else{
        printf("%d is not armstrong numb",n);
    }
}
int main()
{
    int n,i,j,sum=0;
    printf("Enter number:");
    scanf(" %d", &n);
    armstrong(n,i,j);
    return 0;
    
}