#include <stdio.h>
typedef struct
{
    int id;
    char name[20];
    int salary;
} employee;

employee store();
void display(employee);

int main()
{
    employee e1, e2;
    e1 = store();
    display(e1);
    e2 = store();
    display(e2);
    return 0;
}

employee store()
{
    employee e;
    printf("\nEnter the employee details\n");
    
    printf("Enter employee id:");
    scanf("%d", &e.id);

    printf("Enter the name:");
    scanf(" %[^\n]", e.name);

    printf("Enter the salary:");
    scanf("%d", &e.salary);
    return e;
}

void display( employee e)
{

    printf("employee id: %d \n name=%s\n salary= %d \n ", e.id, e.name, e.salary);
}
