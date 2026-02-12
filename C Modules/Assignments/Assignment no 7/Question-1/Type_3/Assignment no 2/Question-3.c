#include<stdio.h>
int greater_num()
{
    int a, b, c;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;


    printf("Enter 3 numbers: ");
    scanf("%d %d %d", ptr1, ptr2, ptr3);

    if (*ptr1 >= *ptr2 && *ptr1 >= *ptr3){
         return *ptr1;
    }
    else if (*ptr2 >= *ptr1 && *ptr2 >= *ptr3)
    {
        return *ptr2;

    }
    else
    {
        return *ptr3;
    }
}

int main()
{
   int result = greater_num();  
    printf("Greatest number is %d\n", result);
    return 0;
}

