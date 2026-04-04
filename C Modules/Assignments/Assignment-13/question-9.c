#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;


    printf("Enter the number of elements:");
    scanf("%d",&n);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }

    printf("Enter the number:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = n-1; i >=0; i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
    
}
