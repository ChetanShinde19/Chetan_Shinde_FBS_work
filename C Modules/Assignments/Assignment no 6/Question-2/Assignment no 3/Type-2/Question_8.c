#include<stdio.h>
void strong(int num,int temp,int digit,int fact,int i)
{
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
        printf("strong number: %d",num);
    }
    else{
        printf("not a strong number: %d",num);
    }
}
int main()
{
    int num,temp,digit,sum=0,fact,i;
    printf("Enter the number\n");
    scanf(" %d", &num);
    strong(num,temp,digit,fact,i);
    return 0;
}