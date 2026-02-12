#include<stdio.h>
int students_marks()
{
   int marks;
   int *ptr1=&marks;
   printf("Enter the marks:");
   scanf("%d",ptr1);
   if (*ptr1>75)
   {
      return 0;
   }
   else if (*ptr1>65)
   {
   return 1;
   }
   else if (*ptr1>55)
   {
    return 2;
   }
   else if (*ptr1>=40)
   {
    return 3;
   }
   else if (*ptr1<=40)
   {
    return 4;
   }
}
int main()
{
   int result=students_marks();
   if (result==0)
   {
    printf("Distinction");
   }
   else if (result==1)
   {
    printf("First Class");
   }
   else if (result==2)
   {
    printf("Second Class");
   }
   else if (result==3)
   {
    printf("Pass Class");
   }
   else if (result==4)
   {
    printf("Fail");
   }
   return 0;
}