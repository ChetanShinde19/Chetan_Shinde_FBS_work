#include<stdio.h>

int even_odd()   
{
    int no;
       printf("Enter the number:");
    scanf("%d",&no);
    if (no % 2 == 0)
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
