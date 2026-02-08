#include<stdio.h>
void paremeter_rectangle();
int main()
{
   paremeter_rectangle();  
   return 0; 
}
void paremeter_rectangle(){
   float length=10;
   float width=10;
   float perimeter=2*(length+width);
   printf("perimeter of the rectangle is %f",perimeter);
 
}