
#include <stdio.h>
int main()
{
    int n, size, i = 0;

    printf("Enter the Size of array:");
    scanf("%d", &size);

    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[size];
    int brr[size];
    int crr[2 * size];

    printf("Enter the number for array a:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
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
        crr[n+i] = brr[i];
    }

    printf("Merged arrays:\n");
    for (int i = 0; i < 2*n; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}