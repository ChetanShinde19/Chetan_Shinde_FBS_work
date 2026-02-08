#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numb:");
    scanf(" %d", &n);
    int count =1;
    for (int  row = 1; row <=n; row++)
    {
        for (int col = 1; col <=row; col++)
    {
        printf("%d",count++);
        /* code */
    }
    printf("\n");
    }
    return 0;
}
