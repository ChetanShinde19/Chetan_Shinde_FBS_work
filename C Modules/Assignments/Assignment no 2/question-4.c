#include<stdio.h>
int main()
{
   int marks;
   printf("Enter the marks:");
   scanf("%d",&marks);
   if (marks>75)
   {
    printf("Distinction",marks);
    /* code */
   }
   else if (marks>65)
   {
    printf("First Class",marks);
    /* code */
   }
   else if (marks>55)
   {
    printf("Second Class",marks);
    /* code */
   }
   else if (marks>=40)
   {
    printf("Pass Class",marks);
    /* code */
   }
   else if (marks<=40)
   {
    printf("Fail",marks);
    /* code */
   }
   return 0;
}