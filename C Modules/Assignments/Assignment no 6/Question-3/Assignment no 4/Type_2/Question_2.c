#include<stdio.h>
int prime(int n)
{
    int flag=1;
      if (n<=1)
    {
        printf("It is not prime number:\n");
    }
    for (int i = 2; i <=n; i++)
    {
        flag=1;
        for(int j=2;j<=i/2;j++)
        {
            if (i%j==0)
        {
            flag=0;
            break;
        }
        }
       
     if (flag==1)
    {
        printf("%d is prime number\n",i);
    }
    else{
        printf("%d is not a prime number\n",i);
    }
    }
}

int main()
{
    int n,flag=1;
    printf("enter the number:");
    scanf(" %d", &n);
    printf("prime number between 1 & %d are :\n",n);
    
    prime(n);

}