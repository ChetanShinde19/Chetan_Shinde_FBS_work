#include<stdio.h>
void age_verify(int age){
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
int main()
{
    int age;
    printf("enter the age:");
    scanf(" %d",&age);
    age_verify(age);
    return 0; 
}

 