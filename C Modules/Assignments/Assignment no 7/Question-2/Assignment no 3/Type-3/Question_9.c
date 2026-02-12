#include<stdio.h>
int palindrome()
{
    int num,temp,rev=0,digit;
    int *ptr1=&num;
    printf("Enter the number:");
    scanf(" %d", ptr1);
    temp=*ptr1;
    while (temp>0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if (rev==*ptr1)
    {
            return 1;
    }
    else{
            return 0;
    }
}
int main()
{
    int result=palindrome();
    int *ptr2=&result;
    if (*ptr2==1)
    {
        printf(" is a palindrome");
    }
    else{
        printf(" is not a palindrome");
    }
return  0;
}