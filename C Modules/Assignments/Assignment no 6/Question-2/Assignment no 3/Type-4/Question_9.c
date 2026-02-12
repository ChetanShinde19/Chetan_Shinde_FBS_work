#include<stdio.h>
int palindrome(int num,int temp,int digit)
{
    int rev=0;
    temp=num;
    while (temp>0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if (rev==num)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int num,temp,rev=0,digit;
    printf("Enter the number:");
    scanf(" %d", &num);
    int result=palindrome(num,temp,digit);
    temp=num;
    while (temp>0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if (rev==num)
    {
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
return  0;
}