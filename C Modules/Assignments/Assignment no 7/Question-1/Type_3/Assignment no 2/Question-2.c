#include<stdio.h>
int traiangle()
{
    int a,b,c;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;

    printf("enter the 3 sides of triangle:");
    scanf("%d %d %d", ptr1, ptr2, ptr3);
      if (*ptr1+*ptr2<=*ptr3||*ptr2+*ptr3<=*ptr1||*ptr1+*ptr3<=*ptr2)
    {
        return 0;
    }
    else if (*ptr1 == *ptr2 && *ptr2 == *ptr3) {
         return 1;
    }
    else if (*ptr1 == *ptr2 || *ptr2 == *ptr3 || *ptr1 == *ptr3) {
        return 2;
    }
    else {
        return 3;
    }
}
int main()
{
   int result=traiangle();
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
   return 0; 
}



