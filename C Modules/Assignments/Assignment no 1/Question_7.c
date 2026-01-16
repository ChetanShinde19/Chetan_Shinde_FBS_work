#include<stdio.h>
int main()
{
    float basic,da,ta,hra,total_salary;
    printf("Enter the basic salary:\n");
    scanf("%f",&basic);
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
    printf("basic:%.f\n",basic);
    printf("da:%.f\n",da);
    printf("ta:%.f\n",ta);
    printf("hra:%.f\n",hra);
    printf("Total salary on basic is %.f",total_salary);
    return 0;
}