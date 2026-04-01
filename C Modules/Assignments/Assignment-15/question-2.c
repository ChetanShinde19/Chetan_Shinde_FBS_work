#include <stdio.h>
#include<stdlib.h>

typedef struct 
{
    int hrs;
    int min;
    int sec;
}Time;


void user(Time *t);
void display(Time t);
Time add(Time t1,Time t2);
int convert_to_seconds(Time t);

int main() {
    
    Time t1,t2,result;
    printf("Enter the first time:\n");
    user(&t1);
    printf("Enter the second time:\n");
    user(&t2);

    printf("\nfirst time:");
    display(t1);
    printf("\nsecond time:");
    display(t2);

    result= add(t1,t2);
    printf("\nsum of time: ");
    display(result);

    printf("\nfisrt time in seconds: %d\n",convert_to_seconds(t1));
    printf("second time in seconds: %d\n",convert_to_seconds(t2));
    return 0;
}

void user(Time *t)
{
    printf("Enter the hour:");
    scanf("%d",&t->hrs);
    printf("Enter the min:");
    scanf("%d",&t->min);
    printf("Enter the sec:");
    scanf("%d",&t->sec);
}

void display(Time t)
{
    printf("%02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}
Time add(Time t1,Time t2)
{
    Time sum;
    sum.sec=t1.sec+t2.sec;
    sum.min=t1.min+t2.min;
    sum.hrs=t1.hrs+t2.hrs;

    if (sum.sec>=60)
    {
        sum.min+=sum.sec/60;
        sum.sec=sum.sec%60;
    }
    if (sum.min>=60)
    {
         sum.hrs+=sum.min/60;
        sum.min=sum.min%60;
    }
    return sum;
    
}
int convert_to_seconds(Time t)
{
    return(t.hrs*3600)+(t.min*60)+t.sec;
}