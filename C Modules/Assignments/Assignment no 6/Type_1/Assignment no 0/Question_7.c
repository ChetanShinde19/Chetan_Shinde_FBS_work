#include<stdio.h>
void time();
int main()
{
    time();
    return 0;
}
void time(){
    int total_minutes=50;
    int hours=total_minutes/60;
    int remaining_minutes=total_minutes%60;
    
    printf("%d minutes = %d hours & %d remaining_minutes ",total_minutes,hours,remaining_minutes);
}

