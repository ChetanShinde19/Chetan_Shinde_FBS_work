#include<stdio.h>
int person_age(int age,int arr[age]);

int main()
{
    int age,arr[age];
    if (person_age(age,arr))
    {
        printf("person is eligible");
    }
    else{
        printf("person is not eligible");
    }
    return 0;
    
}

int person_age(int age,int arr[age])
{
    
    int *ptr=&arr[age];
    printf("enter the age:");
    scanf("%d",ptr);
    if (*ptr>=18)
    {
        return 1;
    }
    else{
       return 0;
    }
}