#include<stdio.h>
struct salesmanager {
    int id;
    char name[20];
    int salary;
    char incentive[30];
    int target;
};

void main(){
    struct salesmanager M[10];
    int n;
    printf("Enter no.of salesmanager :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the salesmanager %d details\n",i+1);

        printf("Enter salesmanager id:");
        scanf("%d",&M[i].id);

        printf("Enter the salesmanager name:");
        scanf("%s",M[i].name);

        printf("Enter the salesmanager salary:");
        scanf("%d",&M[i].salary);

        printf("Enter the incentives:");
        scanf("%s",&M[i].incentive);

        printf("Enter the target sales:");
        scanf("%d",&M[i].target);
    }

    printf("------DETAILS------");
    for (int i = 0; i < n; i++)
    {
         printf("------SALESMANGER DETAILS %d------",i+1);
        printf("\n1.salesmanager Id: %d",M[i].id);
        printf("\n2.salesmanager name: %s",M[i].name);
        printf("\n3.salesmanager salary: %d\n",M[i].salary);
        printf("\n4.incentive : %s\n",M[i].incentive);
        printf("\n5.target : %d\n",M[i].target);
    }
}
