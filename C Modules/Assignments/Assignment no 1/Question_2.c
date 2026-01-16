#include<stdio.h>
int main()
{
    int num,first,last;
    printf("Enter the 3-digit number:");
    scanf("%d",&num);
    first=num/100;
    last=num%10;
    (num>=100 && num<=999 && first==last) &&
    printf("%d it is palindrome number",num);

    (num<100 || num>999 || first!=last) &&
    printf("%d it is not palindrome number",num);
    return 0;
}