#include<stdio.h>
int sum(int n,int first,int last)
{
    last = n % 10;   
    while (n >= 10)
    {
        n = n / 10;   
    }
    first = n;   
    printf("Sum :%d", first + last);   
   
}
int main()
{
    int n, first, last;

    printf("Enter the number:\n");
    scanf("%d", &n);
    int result=sum(n,first,last);
    last = n % 10;   
    while (result==0)
    {
        n = n / 10;   
    }
    first = n;      
    return n;
}
