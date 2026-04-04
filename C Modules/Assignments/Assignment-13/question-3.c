#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0;

    printf("Enter the number of elements:");
    scanf("%d", &n);

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
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum of all numbers is %d", sum);
    free(arr);
    return 0;
}