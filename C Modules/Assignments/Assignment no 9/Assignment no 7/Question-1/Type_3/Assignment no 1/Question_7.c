#include<stdio.h>
float salary(int size,float arr[10]);

int main()
{
    int size;
    float arr[size];
    float result=salary(size,arr);
    printf("Total salary on basic is %.f",result);
    return 0;
}

float salary(int size,float arr[10])
{
    printf("Enter the size of array:");
    scanf("%d",&size);
    float da,ta,hra,total_salary;
    float *ptr=&arr[size];
    printf("Enter the basic salary:\n");
    scanf("%f",ptr);
    if (*ptr<=5000)
    {
        da=*ptr*0.10f;
        ta=*ptr*0.20f;
        hra=*ptr*0.25f;
    }
    else{
        da=*ptr*0.15f;
        ta=*ptr*0.25f;
        hra=*ptr*0.30f;
    }

    total_salary=*ptr+da+ta+hra;
    return total_salary;
  
}