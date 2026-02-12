#include<stdio.h>
void sum(int n,int first,int last)
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
    sum(n,first,last);
    return 0;
}
