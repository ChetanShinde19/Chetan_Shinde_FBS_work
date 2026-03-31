#include<stdio.h>
struct employee {
    int id;
    char name[10];
    int salary;
};

void main(){
    struct employee e[10];
    int n;
    printf("Enter no.of employee:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the employee %d details\n",i+1);

        printf("Enter employee id:");
        scanf("%d",&e[i].id);

        printf("Enter the name:");
        scanf("%s",e[i].name);

        printf("Enter the salary:");
        scanf("%d",&e[i].salary);
    }
    printf("------EMPLOYEE DETAILS------");
    for (int i = 0; i < n; i++)
    {
        printf("\nemployee id: %d",e[i].id);
        printf("\nname: %s",e[i].name);
        printf("\nsalary: %d\n",e[i].salary);
    }
}
