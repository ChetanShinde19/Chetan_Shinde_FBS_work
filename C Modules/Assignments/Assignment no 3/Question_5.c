#include<stdio.h>
int main()
{
    int num,i,j,sum=0;
    printf("Enter the number:\n");
    scanf(" %d", &num);
    i=num;
    while (i>0)
    {
        j=i%10;
        sum=sum+(j*j*j);
        i=i/10;
        /* code */
    }
    if (sum==num)
    {
        printf("%d is armstrong number",num);
        /* code */
    }
    else{

        printf("%d is not armstrong number",num);
    }
    // printf(" %d\n %d\n",i,j);
    return 0;
}



