#include<stdio.h>
void divison(int num){
        if(num%3==0)
    {
        if (num%5==0){
            printf("Divisible by both");
        }
        else{
             printf("Divisible by 3 but not by 5");
        }   
    }
    else{
        if (num%5==0)
        {
            printf("Divisible by 5 but not by 3");
            /* code */
        }
        else{
            printf("Divisible by None");
        }  
    }
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
divison(num);
    return 0;
}