#include<stdio.h>
int person_age(){
    int age=19;
    printf("enter the age:");
    scanf("%d",&age);
    if (age>=18)
    {
        return 1;
        /* code */
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
        /* code */
    }
    else{
        printf("person is not eligible");
    }
    return 0;
    
}