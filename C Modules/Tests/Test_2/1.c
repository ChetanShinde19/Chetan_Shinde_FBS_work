#include<stdio.h>
int main()
{
    int age1,age2,age3;
    printf("Enter the age1:");
    scanf("%d",&age1);
    printf("Enter the age2:\n");
    scanf("%d",&age2);
    printf("Enter the age3:\n");
    scanf("%d",&age3);
    if (age1>=age2)
    {
        printf("Age1 is greater among Three %d",age1);
        /* code */
    }
    else{
        if (age2>=age3)
        {
            printf("Age2 is greater among Three %d",age2);
            /* code */
        }
        else{
            if (age3>=age1)
            {
                printf("Age3 is greater among Three %d",age3);
                /* code */
            }
            
        }
        
    }
    return 0;
    
}