#include <stdio.h>

typedef struct
{
    int roll_no;
    char name[20];
    int incentive;
    int target;
} salesmanager;

salesmanager store();
void display(salesmanager s);

int n;

int main()
{
    salesmanager s1;
    s1 = store();

    display(s1);
    return 0;
}

salesmanager store()
{
    salesmanager s;
    printf("\nEnter the salesmanager details\n");

    printf("Enter the salesmanager id:");
    scanf("%d", &s.roll_no);

    printf("Enter the salesmanager name:");
    scanf(" %[^\n]", s.name);

    printf("Enter the salesmanager incentive:");
    scanf("%d", &s.incentive);

    printf("Enter the salemanager target:");
    scanf("%d", &s.target);
    return s;
}

void display(salesmanager s)
{

    printf("\nsalesmanager ID: %d", s.roll_no);
    printf("\nsalesmanager name: %s", s.name);
    printf("\nsalesmanager incentive: %d", s.incentive);
    printf("\nsalesmanager incentive: %d", s.target);
}
