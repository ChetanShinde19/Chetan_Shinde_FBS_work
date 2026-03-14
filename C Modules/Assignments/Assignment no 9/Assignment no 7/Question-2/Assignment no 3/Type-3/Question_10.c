#include<stdio.h>
int sum(int n[10], int first[10], int last[10]);

int main()
{
    int n[10], first[10], last[10];
    int result=sum(n,first,last);
    int *ptr=&result;
    printf("Sum :%d",*ptr);
    return 0;
}
int sum(int n[10], int first[10], int last[10])
{
    
    int *ptr1=&n[0];
    int *ptr2=&first[0];
    int *ptr3=&last[0];
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

