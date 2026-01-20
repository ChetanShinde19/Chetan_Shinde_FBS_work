// 8. Salary Calculation
// Input basic salary:
// If basic ≥ 20000
// HRA = 30%, DA = 95%
// Else
// If basic ≥ 10000
// HRA = 25%, DA = 90%
// Else
// HRA = 20%, DA = 80%
// Calculate and print gross salary.
#include<stdio.h>
int main()
{
    float basic,hra,da,gross_salary;
    printf("Enter the basic salary:");
    scanf(" %f", &basic);

    if (basic>=20000)
    {
        hra=basic*0.30;
        da=basic*0.95;
        gross_salary=basic+hra+da;
        printf("gross salary is %.2f\n",gross_salary);
        printf("salary is high ");
        /* code */
    }
    else if (basic>=10000)
    {
        hra=basic*0.25;
        da=basic*0.9;
        gross_salary=basic+hra+da;
        printf("gross salary is %.2f\n",gross_salary);
        printf("salary is average ");
        /* code */
    }
    else {
        hra=basic*0.2;
        da=basic*0.8;
        gross_salary=basic+hra+da;
        printf("gross salary is %.2f\n",gross_salary);
        printf("salary is low ");
    }
    return 0;
}