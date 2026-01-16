#include<stdio.h>
int main()
{
    int year=2003;
    if ((year%400==0)&&(year%100!=0)||(year%4==0))
    {
        printf("%d it is a leap year");
        /* code */
    }
    else{
        printf("%d it is not leap year");
    }
    return 0;
    
}