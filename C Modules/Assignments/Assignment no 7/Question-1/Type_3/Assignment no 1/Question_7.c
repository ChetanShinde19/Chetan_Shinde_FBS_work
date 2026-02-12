#include<stdio.h>
int salary(){
    float basic,da,ta,hra,total_salary;
    float *ptr=&basic;
    printf("Enter the basic salary:\n");
    scanf("%f",ptr);
    if (*ptr<=5000)
    {
        da=*ptr*0.10f;
        ta=*ptr*0.20f;
        hra=*ptr*0.25f;
        /* code */
    }
    else{
        da=*ptr*0.15f;
        ta=*ptr*0.25f;
        hra=*ptr*0.30f;
    }

    total_salary=*ptr+da+ta+hra;
    return total_salary;
  
}
int main()
{
    float result=salary();
    printf("Total salary on basic is %.f",result);
    return 0;
}