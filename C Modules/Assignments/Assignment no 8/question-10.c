#include<stdio.h>
int main()
{
    int n,size,temp;

    
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

    for (int i = 0; i < n; i++)
    {
        for (int j =i+1;j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    
    printf("sorted array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
    
}