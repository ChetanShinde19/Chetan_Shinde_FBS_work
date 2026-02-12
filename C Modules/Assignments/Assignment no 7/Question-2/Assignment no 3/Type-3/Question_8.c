#include<stdio.h>
int strong()
{
    int num,temp,digit,sum=0,fact,i;
    int *ptr1=&num;
    printf("Enter the number:");
    scanf(" %d", ptr1);
    temp=*ptr1;
    while (temp>0)
    {
        digit=temp%10;
        fact=1;
        i=1;
        while (i<=digit)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        temp=temp/10;

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
    int result=strong();
    int *ptr2=&result;
    if (*ptr2==1)
    {
        printf("strong number");
    }
    else{
        printf("not a strong number");
    }
    return 0;
}