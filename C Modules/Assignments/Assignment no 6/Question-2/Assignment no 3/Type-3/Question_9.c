#include<stdio.h>
int palindrome()
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
            return 1;
        /* code */
    }
    else{
            return 0;
    }
}
int main()
{
    int result=palindrome();
    if (result==1)
    {
        printf(" is a palindrome");
        /* code */
    }
    else{
        printf(" is not a palindrome");
    }
return  0;
}