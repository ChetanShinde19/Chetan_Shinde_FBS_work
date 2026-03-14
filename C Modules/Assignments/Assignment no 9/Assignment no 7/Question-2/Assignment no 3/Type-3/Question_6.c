#include<stdio.h>
int perfect( int n[10]);

int main()
{
    int n[10];
    int result=perfect(n);
    int *ptr2=&result;
        if (*ptr2==0)
        {
            printf("is a perfect number");
        }
        else {
            printf(" is a not perfect number");
        }

    return 0;
    
}
int perfect( int n[10])
{
    int i=1,sum=0;
    int *ptr1=&n[0];
    printf("Enter the number:\n");
    scanf(" %d",ptr1);
    while (i<=*ptr1/2)
    {
        if (*ptr1%i==0)
        sum=sum+i;
        i++;
    }
        if (sum==*ptr1)
        {
            return 0;
        }
        else {
            return 1;
        }

}