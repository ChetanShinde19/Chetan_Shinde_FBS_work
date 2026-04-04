#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, size;

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

    printf("odd numbers:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\neven numbers:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    free(arr);
    return 0;
}