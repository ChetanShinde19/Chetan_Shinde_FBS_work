#include<stdio.h>
int greater_num(int arr1[10],int arr2[10],int arr3[10]);

int main()
{
    int arr1[10],arr2[10],arr3[10];
   int result = greater_num(arr1,arr2,arr3);  
    printf("Greatest number is %d\n", result);
    return 0;
}

int greater_num(int arr1[10],int arr2[10],int arr3[10])
{
    
    int a=0,b=0,c=0;
    int *ptr1=&arr1[a];
    int *ptr2=&arr2[b];
    int *ptr3=&arr3[c];


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

