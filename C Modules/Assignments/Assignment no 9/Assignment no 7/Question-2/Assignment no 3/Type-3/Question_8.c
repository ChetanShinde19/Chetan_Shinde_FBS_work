#include<stdio.h>
int strong(int num[10]);

int main()
{
    int num[10];
    int result=strong(num);
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

int strong(int num[10])
{
    int temp,digit,sum=0,fact,i;
    int *ptr1=&num[0];
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