// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
#include<stdio.h>
int armstrong()
{
    int n,i,j,sum=0;
    int *ptr1=&n;
    int *ptr2=&i;
    int *ptr3=&j;
    printf("Enter number:");
    scanf(" %d",ptr1);
    ptr2=ptr1;
    while (*ptr1>0)
    {
        *ptr3=*ptr2%10;
        sum=sum+(*ptr3**ptr3**ptr3);
        *ptr2=*ptr2/10;
    }
    if (sum==*ptr1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
   int result=armstrong();
   int *ptr2=&result;
    if (*ptr2==0)
    {
        printf(" is armstrong number");
    }
    else{
        printf(" is not armstrong numb");
    }
    return 0;
    
}