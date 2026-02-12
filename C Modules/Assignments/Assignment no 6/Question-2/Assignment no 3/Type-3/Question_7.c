#include<stdio.h>
int factorial()
{
    int num,fact=1;
    printf("Enter the number\n");
    scanf(" %d",&num);
    while (num>0)
    {
        fact=fact*num;
        num--;
    }
        return fact;
    
}
int main()
{
    int result=factorial();
        printf("factorial number is %d",result);
    return 0;
}