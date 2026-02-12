#include<stdio.h>
void factorial()
{
    int num,fact=1;
    printf("Enter the number:\n");
    scanf("%d", &num);
    if (num<0)
    {
       printf("Factorial not defined for negative numbers\n");
        return; 
    }
    
    while (num>0)
    {
        fact=fact*num;
        num--;
        /* code */
    }
        printf("factorial number is %d",fact);
}
int main()
{
    factorial();
    return 0;
}