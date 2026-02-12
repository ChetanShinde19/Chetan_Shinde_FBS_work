#include<stdio.h>
int age_verify(int age)
{
    if (age<12)
    {
        return 0;
    }
    else if (age>=12 && age<=19)
        {
       return 1;
        /* code */
        }
        else if (age >= 20 && age <= 59)
            {
            return 2;
            }
            else if (age>=60)
                {
                return 3;
                }
                
            }
int main()
{
    int age;
    printf("enter the age:");
    scanf(" %d",&age);
    int result=age_verify(age);
    if (result==0)
    {
        printf("child");
    }
    else if (result==1)
        {
        printf("Teenager");

        }
        else if (result==2)
            {
            printf("Adult");
            }
            else if (result==3)
                {
                printf("Senior");
                }
    return 0; 
}

 