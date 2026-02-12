#include<stdio.h>
void palindrome()
{
    int num,temp,rev=0,digit;
    printf("Enter the number:");
    scanf(" %d", &num);
    temp=num;
    while (temp>0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
        /* code */
    }
    if (rev==num)
    {
        printf("%d is a palindrome",num);
        /* code */
    }
    else{
        printf("%d is not a palindrome",num);
    }
}
int main()
{
palindrome();
return  0;
}