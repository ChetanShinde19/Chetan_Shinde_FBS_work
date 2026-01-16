#include<stdio.h>
int main()
{
    
    int grade1,grade2,grade3;
    printf("Enter the grade1 marks:");
    scanf("%d",&grade1);
    printf("Enter the grade2 marks:");
    scanf("%d",&grade2);
    printf("Enter the grade3 marks:");
    scanf("%d",&grade3);
    if (grade1>=grade2)
    {
        printf("grade1 is greater among Three %d",grade1);
        /* code */
    }
    else{
        if (grade2>=grade3)
        {
            printf("grade2 is greater among Three %d",grade2);
            /* code */
        }
        else{
            if (grade3>=grade1)
            {
                printf("grade3 is greater among Three %d",grade3);
                /* code */
            }
            
        }
        
    }
    return 0;
    
}