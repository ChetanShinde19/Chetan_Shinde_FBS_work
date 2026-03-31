#include <stdio.h>
typedef struct
{
    int id;
    char name[10];
    int salary;
    int allowance;
} admin;

admin store();
void display(admin);

int main()
{
    admin a1,a2;
    a1 = store();
    display(a1);
    a2 = store();
    display(a2);
    return 0;
}

admin store()
{
    admin a;
    printf("\nEnter the Admin details\n");

    printf("Enter Admin id:");
    scanf("%d", &a.id);

    printf("Enter the admin name:");
    scanf(" %[^\n]", a.name);

    printf("Enter the admin salary:");
    scanf("%d", &a.salary);

    printf("Enter the admin allowance:");
    scanf("%d", &a.allowance);

    return a;
}

void display(admin a)
{
    printf("\n------ADMIN DETAILS------");
    printf("\nAdmin Id: %d", a.id);
    printf("\nname: %s", a.name);
    printf("\nsalary: %d", a.salary);
    printf("\nallowance : %d\n", a.allowance);
}