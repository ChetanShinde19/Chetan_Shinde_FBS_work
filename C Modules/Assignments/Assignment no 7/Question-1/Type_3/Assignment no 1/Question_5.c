#include<stdio.h>
int person_age(){
    int age=19;
    int *ptr=&age;
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
int main()
{
    
    if (person_age())
    {
        printf("person is eligible");
    }
    else{
        printf("person is not eligible");
    }
    return 0;
    
}