#include<stdio.h>
void even(int no){
    if (no%2==0)
    {
        printf("even");
        /* code */
    }
    else{
        printf("odd");
    }
}
int main()
{
   even(10);
   return 0;
}
