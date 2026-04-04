#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }

    int min, max;

    printf("Enter the number:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }

    printf("Smallest number in index is %d\n", min);
    printf("Largest number in index is %d", max);
    free(arr);
    return 0;
}