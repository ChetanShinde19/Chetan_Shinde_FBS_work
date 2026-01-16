#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 3 sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b<=c||b+c<=a||a+c<=b)
    {
        printf("Not a valid traiangle:\n");
        /* code */
    }
    else if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }
    

}



