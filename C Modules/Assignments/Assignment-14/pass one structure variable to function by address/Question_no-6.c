#include<stdio.h>
typedef struct 
{
    int date,month,year;
}date;

date store();
void display(date *d);
int main() {
    date d1,d2;
    d1=store();
    display(&d1);
    d2=store();
    display(&d2);    
    return 0;
}

date store()
{
    date d;
    printf("Enter the date-month-year:");
    scanf("%d %d %d",&d.date,&d.month,&d.year);
    return d;
}

void display(date *d)
{
    printf("%d-%d-%d\n",d->date,d->month,d->year);
}
