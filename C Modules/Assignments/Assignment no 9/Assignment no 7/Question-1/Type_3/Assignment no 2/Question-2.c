#include<stdio.h>
int traiangle(int arr1[10],int arr2[10],int arr3[10]);

int main()
{
    int arr1[10],arr2[10],arr3[10];
   int result=traiangle(arr1,arr2,arr3);
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

int traiangle(int arr1[10],int arr2[10],int arr3[10])
{
    int a=0,b=0,c=0;
    int *ptr1=&arr1[a];
    int *ptr2=&arr2[b];
    int *ptr3=&arr3[c];

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


