#include<stdio.h>
int perfect(int n,int sum)
{
    if (n<=1)
    {
        printf("%d not perfect number",n);
        return 0;
    }
    
    printf("Perfect number from 1 to %d are:\n",n);

    for(int i=1;i<=n;i++)
    {
        sum=0;

        for (int j = 1; j <=i/2; j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
        }

        if (sum==i)
        {
            printf("%d is a perfect number\n",i);
        }
        else {
            printf("%d is a not perfect number\n",i);
        }
    }
       
}
int main()
{
   int n,sum;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    perfect(n,sum);
}