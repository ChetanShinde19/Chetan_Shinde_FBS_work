// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
#include<stdio.h>
int armstrong(int n,int i,int j)
{
    int sum=0;
    i=n;
    while (i>0)
    {
        j=i%10;
        sum=sum+(j*j*j);
        i=i/10;
    }
    if (sum==n)
    {
        return 0;
    }
    else{
        return 1;
    } 
}
int main()
{
    int n,i,j,sum=0;
    printf("Enter number:");
    scanf(" %d", &n);
    int result=armstrong(n,i,j);
    i=n;
    while (i>0)
    {
        j=i%10;
        sum=sum+(j*j*j);
        i=i/10;
    }
    if (result==0)
    {
        printf("%d is armastrong number",n);
    }
    else{
        printf("%d is not armstrong numb",n);
    }
    return 0;
    
}