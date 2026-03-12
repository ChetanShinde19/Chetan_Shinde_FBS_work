#include<stdio.h>
int main()
{
    int n,size,search,found=0,times;

    printf("enter how many times you want to search:");
    scanf("%d",&times);
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
    
    for (int j = 0; j < times; j++)
    {

        printf("Enter the number to search:");
        scanf("%d",&search);
        found=0;
        for (int i = 0; i < n; i++)
        {
        if (arr[i]==search)
        {
            printf("Found %d at index %d\n",search,i);
            found=1;
            break;
        }
    }

        if (found==0)
 
        {
            printf("Not found %d!!\n",search);
        }
    }
    return 0;
}
