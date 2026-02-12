#include<stdio.h>
void perfect(int n)
{
    int i=1;
    int sum=0;
    while (i<=n/2)
    {
        if (n%i==0)
        sum=sum+i;
        i++;
    }
        if (sum==n)
        {
            printf("%d is a perfect number",n);
        }
        else {
            printf("%d is a not perfect number",n);
        }
}
int main()
{
    int n,i=1,sum=0;
    printf("Enter the number:\n");
    scanf(" %d",&n);
    perfect(n);
    return 0;
}