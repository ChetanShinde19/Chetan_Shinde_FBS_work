#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, search, found = 0, times;

    printf("enter how many times you want to search:");
    scanf("%d", &times);

    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory!!");
        return 0;
    }
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the number:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < times; j++)
    {

        printf("Enter the number to search:");
        scanf("%d", &search);
        found = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == search)
            {
                printf("Found %d at index %d\n", search, i);
                found = 1;
                break;
            }
        }

        if (found == 0)

        {
            printf("Not found %d!!\n", search);
        }
    }
    free(arr);
    return 0;
}
