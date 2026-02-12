#include<stdio.h>
void age();
int main()
{
age();
    return 0; 
}

void age(){
        int age;
    printf("enter the age:");
    scanf(" %d",&age);
    
    if (age<12)
    {
        printf("child");
        /* code */
    }
    else{
        if (age>=12 && age<=19)
        {
        printf("Teenager");
        /* code */
        }
        else{
            if (age >= 20 && age <= 59)
            {
            printf("Adult");
            }
            else
            {
                if (age>=60)
                {
                printf("Senior");
        /* code */
                }
                
            }
            
        }
      
    }
}

 