// Check the given number is prime or not.
// Input: n = 7
// Output: Prime
#include<stdio.h>
int main()
{
    int n,i=2,flag=1;
    printf("Enter the Number:\n");
    scanf(" %d", &n);
    // printf("Enter the divisor:\n");
    // scanf(" %d", &i);
    while (i<=n/2)
    {
        if (n%i==0)
        {
            flag=0;
            break;
            /* code */
        }
        i++;
        /* code */
    }
    if (flag==1)
    {
        printf("%d is a prime number",n);
        /* code */
    }
    else{
        printf("%d is a not prime number",n);
    }
    
    
    return 0;
    
}