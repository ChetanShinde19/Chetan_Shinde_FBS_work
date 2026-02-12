#include<stdio.h>
int age()
{
    int age;
    int *ptr1=&age;
    printf("enter the age:");
    scanf(" %d",ptr1);
    
    if (*ptr1<12)
    {
        return 0;
    }
    else{
        if (*ptr1>=12 && *ptr1<=19)
        {
        return 1;
        }
        else{
            if (*ptr1 >= 20 && *ptr1 <= 59)
            {
            return 2;
            }
            else
            {
                if (*ptr1>=60)
                {
                return 3;
                }  
            }
            
        } 
    }
}
int main()
{
    int result=age();
    if (result==0)
    {
        printf("child");
    }
    else{
        if (result==1)
        {
        printf("Teenager");
        }
        else{
            if (result==2)
            {
            printf("Adult");
            }
            else
            {
                if (result==3)
                {
                printf("Senior");
                } 
            }  
        } 
    }
    return 0; 
}

 