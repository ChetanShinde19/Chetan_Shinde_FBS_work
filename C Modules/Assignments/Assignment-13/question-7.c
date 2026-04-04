#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, i = 0;

    printf("Enter the number of elements A:");
    scanf("%d", &n1);

    int *arr;
    arr = (int *)malloc(n1 * sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }

    printf("Enter the numbers for array a:\n");

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of elements B:");
    scanf("%d", &n2);

    if (n1 != n2)
    {
        printf("Array must have same size!\n");
        return 0;
    }

    int *brr;
    brr = (int *)malloc(n1 * sizeof(int));
    if (brr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }

    int *crr;
    crr = (int *)malloc(n1 * sizeof(int));
    if (crr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }

    printf("Enter the numbers for array b :\n");

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }



    for (int i = 0; i < n1; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("First array:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSecond array:\n");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", brr[i]);
    }

    printf("\nThird array (sum):\n");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);

    return 0;
}
