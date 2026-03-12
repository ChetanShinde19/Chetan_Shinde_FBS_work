#include<stdio.h>
int main()
{
    int n,size,i=0;

    
    printf("Enter the Size of array:");
    scanf("%d",&size);

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[size];
    int brr[size];
    int crr[size];

    printf("Enter the number for array a:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    
    printf("Enter the number for array b :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&brr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        crr[i]= arr[i]+brr[i];
    }


    printf("First array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nSecond array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }

    printf("\nThird array (sum):\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",crr[i]);
    }

    return 0;
}