#include<stdio.h>
int main()
{
    int a,b,c;
    a=10;
    b=20;
    printf("Before Swapping:\n");
    printf("a=%d,b=%d\n",a,b);

    c=a;
    a=b;
    b=c;
    printf("After Swapping:\n");
    printf("a=%d,b=%d\n",a,b);
    return 0;
}