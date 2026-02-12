#include<stdio.h>
int leap_year(int year)
{
    
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
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    int result=leap_year(year);
    if (result==1)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    
    
}