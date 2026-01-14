#include<stdio.h>
int main()
{
    int total_minutes=10;
    int hours=total_minutes/60;
    int remaining_minutes=hours%60;
    printf("%dminutes,%dhours & %dremaining_minutes ",total_minutes,hours,remaining_minutes);
    return 0;
}