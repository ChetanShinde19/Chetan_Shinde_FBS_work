#include<stdio.h>
void palindrome(int num,int temp,int digit)
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
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
}
int main()
{
    int num,temp,rev=0,digit;
    printf("Enter the number:");
    scanf(" %d", &num);
    palindrome(num,temp,digit);
return  0;
}