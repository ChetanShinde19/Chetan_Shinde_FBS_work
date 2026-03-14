// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
#include<stdio.h>
int armstrong(int n[10],int i[10],int j[10]);

int main()
{
    int n[10],i[10],j[10];
   int result=armstrong(n,i,j);
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

int armstrong(int n[10],int i[10],int j[10])
{
    int sum=0;
    int *ptr1=&n[0];
    int *ptr2=&i[0];
    int *ptr3=&j[0];
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