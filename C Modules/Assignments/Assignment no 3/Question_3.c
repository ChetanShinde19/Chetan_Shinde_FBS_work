#include<stdio.h>
int main()
{
    int start,end,sum=0;
    printf("Enter the  start:\n");
    scanf(" %d", &start);
    printf("Enter the end:\n");
    scanf(" %d", &end);
    while (start<=end)
    {
        sum=sum+start;
        start++;
    }
    printf("Total sum: %d\n",sum);
    return 0;
    // int start=1,end=5,sum=0;
    // // while (start<=end)
    // // {
    // //     sum=sum+start;
    // //     start++;
    // //     /* code */
    // // }
    // // printf("output: %d", sum);
    
    // // return 0;
    
}