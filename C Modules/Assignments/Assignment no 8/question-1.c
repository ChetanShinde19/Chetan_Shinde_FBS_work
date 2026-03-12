#include<stdio.h>
int main()
{
    int n,size;

    printf("Enter the Size of array:");
    scanf("%d",&size);

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[size];
    int min,max;

    printf("Enter the number:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    min=arr[0];
    max=arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i]<=min)
        {
            min=arr[i];
        }
        if (arr[i] >= max)
        {
           max = arr[i];
        }
    }
    
    printf("Smallest number in index is %d\n",min);
    printf("Largest number in index is %d",max);
    return 0;
}