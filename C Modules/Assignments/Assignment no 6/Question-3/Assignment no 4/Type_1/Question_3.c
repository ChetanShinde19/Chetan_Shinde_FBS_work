#include<stdio.h>
void perfect();
void perfect(){
    int n,sum;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    if (n<=1)
    {
        printf("%d not perfect number",n);
        return;
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
                /* code */
            }
            
            /* code */
        }

        if (sum==i)
        {
            printf("%d is a perfect number\n",i);
            /* code */
        }
        else {
            printf("%d is a not perfect number\n",i);
        }
    }

}
int main()
{
   perfect();  
    return 0;
}