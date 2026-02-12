#include<stdio.h>
int leap()
{
     int year;
     int *ptr=&year;
     printf("enter the year:");
     scanf("%d",ptr);
    if ((*ptr%400==0)||(*ptr%4==0 && *ptr%100!=0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    
    if (leap())
    {
        printf(" Is a leap year");
    }
    else
    {
        printf("Is not a leap year");
    }
    
    
}