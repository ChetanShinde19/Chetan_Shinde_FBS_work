#include<stdio.h>
int divisible(int num)
{
    if(num%3==0 && num%5==0)
    {
            return 0;
        }
        else if (num%3==0)
        {
            return 1;
        }   
    
    else if (num%5==0)
        {
            return 2;
        }
        else{
            return 3;
        }
    }
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int result=divisible(num);
    if(result==0)
    {
            printf("Divisible by both");
    }
        else if(result==1){
             printf("Divisible by 3 but not by 5");
        }   
    
    else if (result==2)
        {
            printf("Divisible by 5 but not by 3");
            /* code */
        }
        else{
            printf("Divisible by None");
        }  
    
    return 0;
}