#include<stdio.h>
void age_check(int age){
    if (age>=18)
    {
        printf("person is eligible",age);
        /* code */
    }
    else{
        printf("person is not eligible",age);
    }
}
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    age_check(age);
    return 0;
    
}