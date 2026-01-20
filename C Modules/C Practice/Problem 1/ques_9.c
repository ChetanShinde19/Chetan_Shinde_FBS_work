//9. Triangle Type Checker

// Input three sides:

// If valid triangle

// If all sides equal → Equilateral

// Else if any two equal → Isosceles

// Else → Scalene

// Else → Not a triangle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three side of traingles:");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
    if  (a==b && b==c && c==a)
    {
        printf("all sides equal is Equilateral");
        /* code */
    }

    else if (a==b || b==c || c==a)
    {
        printf("if any two equal is Isosceles");
        /* code */
    }
    else {
        printf("scalene");
        /* code */
    }
}
    else
    {
        printf("Not traingle");
        /* code */
    }
 
    return 0;
}