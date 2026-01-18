#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 3 number:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b)
    {
        printf("%d is greater then %d",a,b);
        /* code */
    }
    else{
        if (b>=c)
        {
            printf("%d is greater then %d",b,c);
            /* code */
        }
        else{
            if (c>=a)
            {
                printf("%d is greater then %d",c,a);
                /* code */
            }
        }        
    }
    return 0;
}
