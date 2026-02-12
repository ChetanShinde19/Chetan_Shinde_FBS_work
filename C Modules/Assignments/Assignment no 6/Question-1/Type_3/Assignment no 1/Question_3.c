#include<stdio.h>
void leapyear(int year){
    if ((year%400==0)||(year%4==0&&year%100!=0))
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
}
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    leapyear(year);
    return 0;
}