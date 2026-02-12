#include<stdio.h>
int perfect()
{
    int n,i=1,sum=0;
    int *ptr1=&n;
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
int main()
{
    int result=perfect();
    int *ptr2=&result;
        if (*ptr2==0)
        {
            printf("is a perfect number");
            /* code */
        }
        else {
            printf(" is a not perfect number");
        }

    return 0;
    
}