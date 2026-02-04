//Print strong numbers in the given range 1 to n.
#include<stdio.h>
int main()
{
    int n,num,temp,digit,sum,fact,i;
    printf("Enter the number\n");
    scanf(" %d", &n);
    
    printf("strong numbers in the given range 1 to %d :\n",n);

    for (int num=1; num<=n;num++)
    {
        temp=num;
        sum=0;
        while (temp>0)
        {
            digit=temp%10;
            fact=1;
        for (int i = 1; i<=digit; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
        break;
        }

    if (sum==num)
    {
        printf("strong number: %d\n",num);
        /* code */
    }
    else{
        printf("not a strong number: %d\n",num);
    }   
}
return 0;
}