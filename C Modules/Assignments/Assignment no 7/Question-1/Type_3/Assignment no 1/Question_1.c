#include<stdio.h>

int even_odd()   
{
    int no;
    int *ptr = &no;
    
    printf("Enter the number:");
    scanf("%d",ptr);

    if (*ptr % 2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    if (even_odd())
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}
