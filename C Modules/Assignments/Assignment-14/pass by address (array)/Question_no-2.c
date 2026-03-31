#include<stdio.h>
struct employee {
    int id;
    char name[20];
    int salary;
};


void store(struct employee *e);
void display(struct employee *e);

void main(){
    struct employee e[10];
    store(e);
    display(e);
}
int n;
void store(struct employee *e)
{
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
}
void display(struct employee *e){
 for (int i = 0; i < n; i++)
    {
        printf("employee id: %d \n name=%s\n salary= %d \n ",e[i].id,e[i].name,e[i].salary);

    }

}