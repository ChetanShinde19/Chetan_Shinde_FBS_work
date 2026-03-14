#include<stdio.h>
int leap(int year,int arr[10]);

int main()
{
    int arr[10],year=0;
    if (leap(year,arr))
    {
        printf(" Is a leap year");
    }
    else
    {
        printf("Is not a leap year");
    }
    
    
}
int leap(int year,int arr[10])
{
     int *ptr=&arr[year];
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