#include<stdio.h>
int main()
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
            printf("%d is a perfect number",n);
            /* code */
        }
        else {
            printf("%d is a not perfect number",n);
        }
        // break;
        /* code */
    return 0;
    
}