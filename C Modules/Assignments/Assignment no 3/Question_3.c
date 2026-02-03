#include<stdio.h>
int main()
{
    int sum=0,end,start;
    printf("Enter the start value:");
    scanf(" %d",&start);
    
    printf("Enter the end value:");
    scanf(" %d",&end);
    while (start<=end)
    {
        sum=sum+start;
        start++;
        /* code */
    }
    printf("output: %d",sum);
    return 0;

}
