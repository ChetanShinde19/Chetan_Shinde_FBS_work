#include<stdio.h>
int factorial(int num)
{
    int fact=1;
    while (num>0)
    {
        fact=fact*num;
        num--;
    }
    
}
int main()
{
    int num,fact=1;
    printf("Enter the number:");
    scanf(" %d",&num);
    int result= factorial(num);
    while (result==0)
    {
        fact=fact*num;
        num--;
    }
        printf("factorial number is %d",result);
    
    return 0;
}