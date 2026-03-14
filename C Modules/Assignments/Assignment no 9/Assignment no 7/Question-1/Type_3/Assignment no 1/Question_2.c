#include<stdio.h>
int palindrome(int num,int arr[10]);

int main()
{
    int arr[10];
    int num=0;
    if(palindrome(num,arr)){
    printf("it is palindrome number");
    }
    else{
    printf("it is not palindrome number");
    }
    return 0;
}

int palindrome(int num,int arr[10])
{
    int first,last;
    int *ptr=&arr[num];
    printf("Enter the 3-digit number:");
    scanf("%d",ptr);
    first=*ptr/100;
    last=*ptr%10;
    if(*ptr>=100 && *ptr<=999 && first==last){
        return 1;
    }
    else{
        return 0;
} 
}

// #include<stdio.h>
// void palindrome_no(int arr[],int n,int first,int last)
// {
//     int n,first,last;
//     int *ptr=&n;
//     printf("Enter the 3-digit number:");
//     scanf("%u",ptr);
//     first=*ptr/100;
//     last=*ptr%10;
//     if(*ptr>=100 && *ptr<=999 && first==last){
//         return 1;
//     }
//     else{
//         return 0;
// } 
// }
// int main()
// {
//     int n,size,temp;

    
//     printf("Enter the Size of array:");
//     scanf("%d",&size);

//     printf("Enter the number of elements:");
//     scanf("%d",&n);

//     int arr[size];

//     printf("Enter the number:\n");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ",&arr[i]);
//     }

//     palindrome_no(arr,n);
//     return 0;
    
// }