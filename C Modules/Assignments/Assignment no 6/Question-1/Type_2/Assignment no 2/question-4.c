#include<stdio.h>
int students_marks()
{
   int marks;
   printf("Enter the marks:");
   scanf("%d",&marks);
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
   int result=students_marks();
   if (result==0)
   {
    printf("Distinction");
    /* code */
   }
   else if (result==1)
   {
    printf("First Class");
    /* code */
   }
   else if (result==2)
   {
    printf("Second Class");
    /* code */
   }
   else if (result==3)
   {
    printf("Pass Class");
    /* code */
   }
   else if (result==4)
   {
    printf("Fail");
    /* code */
   }
   return 0;
}