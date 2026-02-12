#include<stdio.h>
void leap();
int main()
{
    leap();
    return 0; 
}
void leap(){
    int year=2008;
    if ((year%400==0)||(year%4==0&&year%100!=0))
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
}