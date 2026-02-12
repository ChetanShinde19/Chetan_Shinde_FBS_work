#include<stdio.h>
void sum_num(int start,int end)
{
    int sum=0;
    while (start<=end)
    {
        sum=sum+start;
        start++;
    }
     printf("output: %d",sum);
}
int main()
{
    int start,end;
    printf("Enter the start value:");
    scanf(" %d",&start);
    
    printf("Enter the end value:");
    scanf(" %d",&end);
    
    sum_num(start,end);
    return 0;
}
