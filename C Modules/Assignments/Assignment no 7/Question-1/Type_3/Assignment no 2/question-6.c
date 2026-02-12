#include<stdio.h>
int divisible()
{
    int num;
    int *ptr1=&num;
    printf("enter the number:");
    scanf("%d",ptr1);

    if(*ptr1%3==0 && *ptr1%5==0)
    {
            return 0; 
    }
    else if (*ptr1%3==0)
        {
        return 1;
        }
        else if (*ptr1%5==0){
            return 2;
        }  
        else{
            return 3;
        }
    }
int main()
{
    int result=divisible();

    if(result==0){
            printf("Divisible by both");
        }
        else if (result==1)
        {
            printf("Divisible by 3 but not by 5");
        }   
    
    else if (result==2)
        {
            printf("Divisible by 5 but not by 3");
        }
        else{
            printf("Divisible by None");
        }  
    
    return 0;
}