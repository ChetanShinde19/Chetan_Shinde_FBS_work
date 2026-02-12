#include<stdio.h>
int strong()
{
    int num,temp,digit,sum=0,fact,i;
    printf("Enter the number:");
    scanf(" %d", &num);
    temp=num;
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
    if (sum==num)
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
    if (result==1)
    {
        printf("strong number");
    }
    else{
        printf("not a strong number");
    }
    return 0;
}