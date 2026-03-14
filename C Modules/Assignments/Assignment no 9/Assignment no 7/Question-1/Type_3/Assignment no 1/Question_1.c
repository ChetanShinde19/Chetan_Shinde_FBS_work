#include<stdio.h>
int even_odd(int no,int arr[10]);
int main()
{
    int arr[10];
    int no=0;
    if (even_odd(no,arr))
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    return 0;
}
int even_odd(int no,int arr[10])   
{
    int *ptr = &arr[no];
    
    printf("Enter the number:");
    scanf("%d",ptr);

    if (*ptr % 2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}




// #include<stdio.h>
// void even_odd(int arr[],int n);

// int main()
// {
//     int n,size;

//     printf("Enter the Size of array:");
//     scanf("%d",&size);

//     printf("Enter the number of elements:");
//     scanf("%d",&n);

//     int arr[size];

//     printf("Enter the number:\n");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     even_odd(arr,n);
//     return 0;
// }

// void even_odd(int arr[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//     if (arr[i]%2==0)
//     {
//        printf("Even are: %d\n",arr[i]);
//     }
//     else if (arr[i]%2!=0)
//     {
//         printf("odd are: %d\n",arr[i]);
//     }
    
// }
// }