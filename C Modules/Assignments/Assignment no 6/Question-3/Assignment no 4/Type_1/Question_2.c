#include<stdio.h>
void prime();
void prime(){
     int n,flag=1;
    printf("enter the number:");
    scanf(" %d", &n);
    printf("prime numberbetween 1 & %d are :\n",n);
      if (n<=1)
    {
        printf("It is not prime number:\n");
        /* code */
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
            /* code */
        }
        }
       
     if (flag==1)
    {
        printf("%d is prime number\n",i);
        /* code */
    }
    else{
        printf("%d is not a prime number\n",i);
    }
        /* code */
    }
   
}

int main()
{
   prime();
    return 0;
}