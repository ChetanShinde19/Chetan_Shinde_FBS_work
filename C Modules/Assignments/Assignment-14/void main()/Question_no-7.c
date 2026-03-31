#include<stdio.h>
struct time {
    int hour;
    int min;
    int sec;
};

void main(){

    struct time t;
    printf("Entre the (hour min sec)");
    scanf("%d %d %d",&t.hour,&t.min,&t.sec);


    printf("Date: %d-%d-%d",t.hour,t.min,t.sec);
}
