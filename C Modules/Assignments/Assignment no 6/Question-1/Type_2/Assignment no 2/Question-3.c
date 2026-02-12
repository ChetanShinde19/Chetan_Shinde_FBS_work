#include<stdio.h>
int greater_num()
{
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c){
         return a;
    }
    else if (b >= a && b >= c)
    {
        return b;

    }
    else
    {
        return c;
    }
}

int main()
{
   int result = greater_num();  
    printf("Greatest number is %d\n", result);
    return 0;
}

