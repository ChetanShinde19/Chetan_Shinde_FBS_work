#include<stdio.h>
int age_check(int age)
{

    if (age>=18)
    {
    return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    int result=age_check(age);
    if (result==1)
    {
        printf("person is eligible",age);
        /* code */
    }
    else{
        printf("person is not eligible",age);
    }
    return 0;
    
}