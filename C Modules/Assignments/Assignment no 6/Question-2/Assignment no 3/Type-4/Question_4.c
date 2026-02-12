#include<stdio.h>
int prime(int n)
{
    int i=2,flag=1;
    if (n<=1)
    {
        return 0;
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
        return 1;
    }
    else{
        return 2;
    }

}
int main()
{
    int n,i=2,flag=1;
    printf("enter the number:");
    scanf(" %d", &n);
    int result=prime(n);
    if (result==0)
    {
        printf("It is not prime number: %d",n);
        return 0;
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
    if (result==1)
    {
        printf("%d is prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    // for ( int i = 2; i <=n/2; i++)
    // {
    //      if (n%i==0)
    //     {
    //         flag=0;
    //         break;
    //     }
    // }
    
}