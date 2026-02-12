
#include<stdio.h>
int strong(int num,int temp,int digit,int fact,int i){
    int sum=0;
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
    }if (sum==num)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int num,temp,digit,sum=0,fact,i;
    printf("Enter the number:");
    scanf(" %d", &num);
    int  result=strong(num,temp,digit,fact,i);
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
    }if (result==0)
    {
        printf("strong number: %d",num);
    }
    else{
        printf("not a strong number: %d",num);
    }
    return 0;
}