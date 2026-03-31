#include<stdio.h>
struct HR {
    int id;
    char name[10];
    int salary;
    int commission;
};

void main(){
    struct HR h[10];
    int n;
    printf("Enter no.of HR employess:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the employee %d details\n",i+1);

        printf("Enter HR id:");
        scanf("%d",&h[i].id);

        printf("Enter the name:");
        scanf("%s",h[i].name);

        printf("Enter the salary:");
        scanf("%d",&h[i].salary);

        printf("Enter the commission:");
        scanf("%d",&h[i].commission);
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("\n------HR DETAILS %d------",i+1);
        printf("\nHR Id: %d",h[i].id);
        printf("\nname: %s",h[i].name);
        printf("\nsalary: %d\n",h[i].salary);
        printf("\ncommission : %d\n",h[i].commission);
    }
}
