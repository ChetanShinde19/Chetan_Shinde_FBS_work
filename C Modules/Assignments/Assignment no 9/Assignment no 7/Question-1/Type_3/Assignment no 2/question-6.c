#include<stdio.h>
int divisible(int arr[10],int num);

int main()
{
    int arr[10],num=0;
    int result=divisible(arr,num);

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

int divisible(int arr[10],int num)
{
    
    
    int *ptr=&arr[num];
    printf("enter the number:");
    scanf("%d",ptr);

    if(*ptr%3==0 && *ptr%5==0)
    {
            return 0; 
    }
    else if (*ptr%3==0)
        {
        return 1;
        }
        else if (*ptr%5==0){
            return 2;
        }  
        else{
            return 3;
        }
    }