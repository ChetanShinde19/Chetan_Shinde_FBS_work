#include<stdio.h>
int perfect()
{
    int n,i=1,sum=0;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    while (i<=n/2)
    {
        if (n%i==0)
        sum=sum+i;
        i++;
    }
        if (sum==n)
        {
            return 0;
        }
        else {
            return 1;
        }

}
int main()
{
    int result=perfect();
        if (result==0)
        {
            printf("is a perfect number");
            /* code */
        }
        else {
            printf(" is a not perfect number");
        }

    return 0;
    
}