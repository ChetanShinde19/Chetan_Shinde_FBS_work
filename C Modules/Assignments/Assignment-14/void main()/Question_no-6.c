#include<stdio.h>
struct Date {
    int date;
    int month;
    int year;
};

void main(){

    struct Date d;
    printf("Entre the (dd mm yy)");
    scanf("%d %d %d",&d.date,&d.month,&d.year);

    printf("Date: %d-%d-%d",d.date,d.month,d.year);
}
