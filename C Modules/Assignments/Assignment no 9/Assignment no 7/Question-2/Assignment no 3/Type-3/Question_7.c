#include<stdio.h>
int factorial(int num[10]);

int main()
{
    int num[10];
    int result=factorial(num);
    int *ptr2=&result;
        printf("factorial number is %d",*ptr2);
    return 0;
}

int factorial(int num[10])
{
    int fact=1;
    int *ptr1=&num[0];
    printf("Enter the number:");
    scanf("%d",ptr1);
    while (*ptr1 > 0)
    {
        fact=fact*(*ptr1);
        (*ptr1)--;
    }
        return fact;
    
}