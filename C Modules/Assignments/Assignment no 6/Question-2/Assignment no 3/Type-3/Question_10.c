#include<stdio.h>
int sum()
{
    int n, first, last;

    printf("Enter the number:\n");
    scanf("%d", &n);

    last = n % 10;   
    while (n >= 10)
    {
        n = n / 10;   
    }
    first = n;      
    return first+last;
}

int main()
{

    int result=sum();
    printf("Sum :%d",result);
    return 0;
}
