#include<stdio.h>
typedef struct 
{
    double feet,inch;
}distance;

distance store();
void display(distance t);
int main() {
    distance t1,t2;
    t1=store();
    display(t1);
    t2=store();
    display(t2);    
    return 0;
}

distance store()
{
    distance t;
    printf("Enter the feet,inch:");
    scanf("%ld %ld",&t.feet,&t.inch);
    return t;
}

void display(distance t)
{
    printf("feet,inch:%ld,%ld\n",t.feet,t.inch);
}
