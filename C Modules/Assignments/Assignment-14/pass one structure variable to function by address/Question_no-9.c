#include<stdio.h>
typedef struct 
{
    int real,imaginary;
}complex;

complex store();
void display(complex *t);
int main() {
    complex t1,t2;
    t1=store();
    display(&t1);
    t2=store();
    display(&t2);    
    return 0;
}

complex store()
{
    complex t;
    printf("Enter the real,imaginary:");
    scanf("%d %d",&t.real,&t.imaginary);
    return t;
}

void display(complex *t)
{
    printf("real,imaginary:%d+%di\n",t->real,t->imaginary);
}
