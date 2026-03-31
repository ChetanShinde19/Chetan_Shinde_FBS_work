#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll_no;
    char name[20];
    int marks;
};

void store(struct student *s,int n);
void display(struct student *s,int n);



int main()
{
    int n;

    struct student *s;
    printf("Enter no.of student:");
    scanf("%d",&n);
    s=(struct student *)malloc(n * sizeof(struct student));
       if (s==NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
        /* code */
    }
    store(s,n);
    display(s,n);
    free(s);
    return 0;
}

void store(struct student *s,int n)
{


    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the student %d details\n",i+1);

        printf("Enter roll no:");
        scanf("%d",&s[i].roll_no);

        printf("Enter the name:");
        scanf(" %[^\n]", s[i].name);

        printf("Enter the marks:");
        scanf("%d",&s[i].marks);
    }
}

void display(struct student *s,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nroll_no: %d",s[i].roll_no);
        printf("\nname: %s",s[i].name);
        printf("\nmarks: %d\n",s[i].marks);
    }
}
