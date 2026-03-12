#include<stdio.h>
int main()
{
    int n,size;

    
    printf("Enter the Size of array:");
    scanf("%d",&size);

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[size];

    printf("Enter the number:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("odd numbers:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2!=0)
        {
           printf("%d ",arr[i]); 
        }
        
    }

    printf("\neven numbers:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
           printf("%d ",arr[i]); 
        }
        
    }
    return 0;

}