#include<stdio.h>
int main()
{
    int num,temp,digit,sum=0,fact,i;
    printf("Enter the number\n");
    scanf(" %d", &num);
    temp=num;
    while (temp>0)
    {
        digit=temp%10;
        fact=1;
        i=1;
        while (i<=digit)
        {
            fact=fact*i;
            i++;
            /* code */
        }
        sum=sum+fact;
        temp=temp/10;
        /* code */
    }if (sum==num)
    {
        printf("strong number: %d",num);
        /* code */
    }
    else{
        printf("not a strong number: %d",num);
    }
      

        /* code */
    
    return 0;
}