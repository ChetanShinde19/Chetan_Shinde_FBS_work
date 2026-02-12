#include<stdio.h>
int salary(float basic,float da,float ta,float hra,float total_salary){
    if (basic<=5000)
    {
        da=basic*0.10f;
        ta=basic*0.20f;
        hra=basic*0.25f;
        /* code */
    }
    else{
        da=basic*0.15f;
        ta=basic*0.25f;
        hra=basic*0.30f;
    }

    total_salary=basic+da+ta+hra;
    return total_salary;

}
int main()
{
    float basic,da,ta,hra,total_salary;
    printf("Enter the basic salary:\n");
    scanf("%f",&basic);
    float result=salary(basic,da,ta,hra,total_salary);
    printf("Total salary on basic is %.f",result);
    return 0;
}