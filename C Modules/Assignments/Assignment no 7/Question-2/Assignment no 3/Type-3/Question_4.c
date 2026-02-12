#include<stdio.h>
int prime()
{
    int n,i=2,flag=1;
    int *ptr1=&n;
    printf("enter the number:");
    scanf("%d", ptr1);
    if (*ptr1<=1)
    {
        return 0;
    }

 // for ( int i = 2; i <=n/2; i++)
    // {
    //      if (n%i==0)
    //     {
    //         flag=0;
    //         break;
    //     }
    // }

    while (i<=*ptr1/2)
    {
        if (*ptr1%i==0)
        {
            flag=0;
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

    int result=prime();
    int *ptr2=&result;
    if (*ptr2==0)
    {
        printf("It is not prime number:");
  
    }
    if (*ptr2==1)
    {
        printf(" is prime number");

    }
    else{
        printf(" is not a prime number");
    } 
}