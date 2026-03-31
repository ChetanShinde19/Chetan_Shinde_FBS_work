#include <stdio.h>

typedef struct
{
    int roll_no;
    char name[20];
    int marks;
} student;

student store();
void display(student *s);

int n;

int main()
{
    student s1,s2;
    s1=store();
    display(&s1);
    s2=store();
    display(&s2);
    return 0;
}

student store()
{
    student s;
    printf("\nEnter the student details\n");

    printf("Enter roll no:");
    scanf("%d", &s.roll_no);

    printf("Enter the name:");
    scanf(" %[^\n]", s.name);

    printf("Enter the marks:");
    scanf("%d", &s.marks);
    return s;
}

void display(student *s)
{

    printf("\nroll_no: %d", s->roll_no);
    printf("\nname: %s", s->name);
    printf("\nmarks: %d", s->marks);
}
