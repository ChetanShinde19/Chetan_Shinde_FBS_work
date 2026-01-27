#include<stdio.h>
int main()
{
    int number;
    int i;
    int l;
    printf("enter the number:\n");
    scanf(" %d", &number);
    printf("enter the increment number:\n");
    scanf(" %d", &i);
    printf("enter the left number:\n");
    scanf(" %d", &l);
    while (i<=10)
    {
        printf(" %d * %d = %d\n",l,i,number*i);
        i++;
        /* code */
    }
    
}