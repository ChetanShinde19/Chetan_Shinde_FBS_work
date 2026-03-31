#include <stdio.h>
typedef struct
{
    int id;
    char name[10];
    int salary;
    int commission;
} HR;

HR store();
void display(HR);

int main()
{
    HR h1,h2;
    h1 = store();
    display(h1);
    h2 = store();
    display(h2);
    return 0;
}

HR store()
{
    HR h;
    printf("\nEnter the HR details\n");

    printf("Enter HR id:");
    scanf("%d", &h.id);

    printf("Enter the HR name:");
    scanf(" %[^\n]", h.name);

    printf("Enter the HR salary:");
    scanf("%d", &h.salary);

    printf("Enter the HR commission:");
    scanf("%d", &h.commission);

    return h;
}

void display(HR h)
{
    printf("\n------HR DETAILS------");
    printf("\nHR Id: %d", h.id);
    printf("\nname: %s", h.name);
    printf("\nsalary: %d", h.salary);
    printf("\ncommission : %d\n", h.commission);
}