#include<stdio.h>
int leap()
{
     int year;
     printf("enter the year:");
     scanf("%d",&year);
    if ((year%400==0)||(year%4==0&&year%100!=0))
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