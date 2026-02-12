#include<stdio.h>
void factorial(int num)
{
    int fact=1;
    while (num>0)
    {
        fact=fact*num;
        num--;
    }
        printf("factorial number is %d",fact);
    
}
int main()
{
    int num,fact=1;
    printf("Enter the number\n");
    scanf(" %d",&num);
    factorial(num);
    return 0;
}