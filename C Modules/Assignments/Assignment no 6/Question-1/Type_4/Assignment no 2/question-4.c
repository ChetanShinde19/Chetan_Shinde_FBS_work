#include<stdio.h>
int grade(int marks)
{
   if (marks>75)
   {
    return 0;
    /* code */
   }
   else if (marks>65)
   {
    return 1;
    /* code */
   }
   else if (marks>55)
   {
    return 2;
    /* code */
   }
   else if (marks>=40)
   {
    return 3;
    /* code */
   }
   else if (marks<=40)
   {
    return 4;
    /* code */
   }
}
int main()
{
   int marks;
   printf("Enter the marks:");
   scanf("%d",&marks);
   int result=grade(marks);
   if (result==0)
   {
    printf("Distinction",marks);
    /* code */
   }
   else if (result==1)
   {
    printf("First Class",marks);
    /* code */
   }
   else if (result==2)
   {
    printf("Second Class",marks);
    /* code */
   }
   else if (result==3)
   {
    printf("Pass Class",marks);
    /* code */
   }
   else if (result==4)
   {
    printf("Fail",marks);
    /* code */
   }
}