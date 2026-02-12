#include<stdio.h>
void prime(int n)
{
    int i=2;
    int flag=1;
    if (n<=1)
    {
        printf("It is not prime number:");
    }
    while (i<=n/2)
    {
        if (n%i==0)
        {
            flag==0;
            break;
        }
        i++;
    }
    if (flag==1)
    {
        printf("%d is prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}
int main()
{
    int n,i=2,flag=1;
    printf("enter the number:");
    scanf(" %d", &n);
    prime(n);
}