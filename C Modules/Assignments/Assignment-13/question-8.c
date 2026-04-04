
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i = 0;

    printf("Enter the number of elements of a:");
    scanf("%d", &n);

    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }

    printf("Enter the number for array a:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *brr;
    brr = (int *)malloc(n * sizeof(int));
    if (brr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }

    int *crr;
    crr = (int *)malloc(2 * n * sizeof(int));
    if (crr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }
    printf("Enter the number for array b :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        crr[n + i] = brr[i];
    }

    printf("Merged arrays:\n");
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", crr[i]);
    }
    free(arr);
    free(brr);
    free(crr);


    return 0;
}