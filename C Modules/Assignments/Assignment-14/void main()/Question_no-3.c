#include<stdio.h>
struct admin {
    int id;
    char name[10];
    int salary;
    int allowance;
};

void main(){
    struct admin a[10];
    int n;
    printf("Enter no.of Admin:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the Admin %d details\n",i+1);


        printf("Enter Admin id:");
        scanf("%d",&a[i].id);

        printf("Enter the admin name:");
        scanf("%s",a[i].name);

        printf("Enter the admin salary:");
        scanf("%d",&a[i].salary);

        printf("Enter the admin allowance:");
        scanf("%d",&a[i].allowance);
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("\n------ADMIN DETAILS %d------",i+1);
        printf("\nAdmin Id: %d",a[i].id);
        printf("\nname: %s",a[i].name);
        printf("\nsalary: %d\n",a[i].salary);
        printf("\nallowance : %d\n",a[i].allowance);
    }
}