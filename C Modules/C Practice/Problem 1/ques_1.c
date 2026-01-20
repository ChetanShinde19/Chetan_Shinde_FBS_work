// 1. Largest of Three Numbers
// Write a C program to read three integers and print the largest using nested if–else.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        printf("%d is greater then %d",a,b);
        /* code */
    }
    else{
        if (b>c)
        {
            printf("%d is greater then %d",b,c);
            /* code */
        }
        else{
            if (c>a)
            {
                printf("%d is greater then %d",c,a);
                /* code */
            }
            
        }
        
    }
    return 0;
    
}