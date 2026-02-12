#include<stdio.h>
int perfect(int n)
{
    int i=1,sum=0;
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
    int n,i=1,sum=0;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    int result= perfect(n);
    while (i<=n/2)
    {
        if (n%i==0)
        sum=sum+i;
        i++;
    }
        if (result==0)
        {
            printf("%d is a perfect number",n);
        }
        else {
            printf("%d is a not perfect number",n);
        }
    return 0;
    
}