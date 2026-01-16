#include<stdio.h>
int main()
{
    int hh,min,sec;
    int total_seconds;
    printf("Enter the estimated time:\n");
    scanf("%d %d %d",&hh,&min,&sec);

    total_seconds=(hh*3600)+(min*60)+sec;

    printf("Total Seconds:%d",total_seconds);
    return 0;
}


