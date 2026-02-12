#include<stdio.h>
int factorial()
{
    int num,fact=1;
    int *ptr1=&num;
    printf("Enter the number:");
    scanf(" %d",ptr1);
    while (*ptr1>0)
    {
        fact=fact*(*ptr1);
        (*ptr1)--;
    }
        return fact;
    
}
int main()
{
    int result=factorial();
    int *ptr2=&result;
        printf("factorial number is %d",*ptr2);
    return 0;
}