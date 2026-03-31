#include<stdio.h>

struct student{
    int roll_no;
    char name[30];
    int marks;
};

int main()
{
    struct student s[10];
    int n;
    printf("Enter no.of student:");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the student %d details\n",i+1);

        printf("Enter roll no:");
        scanf("%d",&s[i].roll_no);

        printf("Enter the name:");
        scanf("%s",s[i].name);

        printf("Enter the marks:");
        scanf("%d",&s[i].marks);
    }
    printf("------STUDENT DETAILS------");
    for (int i = 0; i < n; i++)
    {
        printf("\nroll_no: %d",s[i].roll_no);
        printf("\nname: %s",s[i].name);
        printf("\nmarks: %d\n",s[i].marks);
    }
}


