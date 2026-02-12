#include<stdio.h>
int triangle(int a,int b,int c)
{
    if (a+b<=c||b+c<=a||a+c<=b)
    {
        return 0;
        /* code */
    }
    else if (a == b && b == c) {
        return 1;
    }
    else if (a == b || b == c || a == c) {
        return 2;
    }
    else {
        return 3;
    }

}
int main()
{
    int a,b,c;
    printf("enter the 3 sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    int result=triangle(a,b,c);
    if (result==0)
    {
        printf("Not a valid traiangle:\n");
        /* code */
    }
    else if (result==1) {
        printf("Equilateral triangle\n");
    }
    else if (result==2) {
        printf("Isosceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }

}



