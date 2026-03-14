#include<stdio.h>
int students_marks(int arr[10]);

int main()
{
   int arr[10];
   int result=students_marks(arr);
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


int students_marks(int arr[10])
{
   int *ptr1=&arr[10];
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