#include<stdio.h>
int sum()
{
    int n, first, last;
    int *ptr1=&n;
    int *ptr2=&first;
    int *ptr3=&last;
    printf("Enter the number:\n");
    scanf("%d", ptr1);

    *ptr3 = (*ptr1) % 10;   
    while (*ptr1 >= 10)
    {
        *ptr1 = *ptr1 / 10;   
    }
    *ptr2 = *ptr1;      
    return *ptr2+*ptr3;
}

int main()
{
    int result=sum();
    int *ptr=&result;
    printf("Sum :%d",*ptr);
    return 0;
}
