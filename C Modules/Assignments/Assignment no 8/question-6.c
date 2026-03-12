#include<stdio.h>
int main()
{
    int n,size,flag=1;

    
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

    printf("prime number are:\n");
     for ( int i = 0; i <n; i++)
    {
        flag=1;
        for (int j = 2; j <= arr[i]/2; j++)
        {
         if (arr[i]%j==0)
        {
            flag=0;
            break;

        }
    }
    if (flag==1 && arr[i]>1)
    {
        printf("%d is prime number\n",arr[i]);
    }
    else{
        printf("%d is not a prime number\n",arr[i]);
    }
  
}
    
    return 0;
}




