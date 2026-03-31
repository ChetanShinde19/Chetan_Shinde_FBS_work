#include<stdio.h>
typedef struct 
{
    int hrs,min,sec;
}time;

time store();
void display(time t);
int main() {
    time t1,t2;
    t1=store();
    display(t1);
    t2=store();
    display(t2);    
    return 0;
}

time store()
{
    time t;
    printf("Enter the hour-minutes-seconds:");
    scanf("%d %d %d",&t.hrs,&t.min,&t.sec);
    return t;
}

void display(time t)
{
    printf("hour,min,sec:%d,%d,%d\n",t.hrs,t.min,t.sec);
}
