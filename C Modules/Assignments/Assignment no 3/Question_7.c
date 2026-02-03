#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number\n");
    scanf(" %d",&num);
    while (num>0)
    {
        fact=fact*num;
        num--;
        /* code */
    }
        printf("factorial number is %d",fact);
    
    return 0;
}