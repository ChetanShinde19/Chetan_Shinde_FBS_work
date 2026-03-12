#include<stdio.h>
int main()
{
    int n,size,sum=0;


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
        sum=sum+arr[i];
        
    }
    printf("sum of all numbers is %d",sum);
        
    return 0;

}