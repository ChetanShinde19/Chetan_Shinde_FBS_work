#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:\n");
    scanf(" %d",&num);
    while (num<=10)
    {
        printf(" %d",num);
        num++;
    }
    return 0;
    
}