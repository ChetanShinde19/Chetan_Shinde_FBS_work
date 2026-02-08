#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numb:");
    scanf(" %d", &n);
    for (int  row = 1; row <=n; row++)
    {
        for (int col = 1; col <=row; col++)
    {
        printf("*");
        /* code */
    }
    printf("\n");
    }
    for (int  row = n; row >=1; row--)
    {
        for (int col = 2; col <=row; col++)
    {
        printf("*");
        /* code */
    }
    printf("\n");
    }
    return 0;
}
