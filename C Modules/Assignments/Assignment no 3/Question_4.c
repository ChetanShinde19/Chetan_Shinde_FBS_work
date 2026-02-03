#include<stdio.h>
int main()
{
    int n,i=2,flag=1;
    printf("enter the number:");
    scanf(" %d", &n);
    if (n<=1)
    {
        printf("It is not prime number:");
        /* code */
    }
    while (i<=n/2)
    {
        if (n%i==0)
        {
            flag==0;
            break;
            /* code */
        }
        i++;
        /* code */
    }
    if (flag==1)
    {
        printf("%d is prime number",n);
        /* code */
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
    //         /* code */
    //     }
    //     /* code */
    // }
    // if (flag==1)
    // {
    //     printf("%d is prime number",n);
    //     /* code */
    // }
    // else{
    //     printf("%d is not a prime number",n);
    // }
    
}