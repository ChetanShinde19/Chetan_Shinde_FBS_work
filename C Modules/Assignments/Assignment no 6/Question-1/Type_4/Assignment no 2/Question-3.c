#include<stdio.h>
int number(int a,int b,int c)
{
    if (a>=b)
    {
        return 0;
        /* code */
    }
    else{
        if (b>=c&&c>=a)
        {
            return 1;
            /* code */
        }
        else{
                return 2;
        }        
    }
}
int main()
{
    int a,b,c;
    printf("enter the 3 number:");
    scanf("%d %d %d",&a,&b,&c);
    int result=number(a,b,c);
    if (result==0)
    {
        printf("%d is greater then %d & %d",a,b,c);
        /* code */
    }
    else if (result==1)
        {
            printf("%d is greater then %d & %d",b,c,a);
            /* code */
        }
        else if (result==2)
            {
                printf("%d is greater then %d & %d",c,a,b);
                /* code */
            }
               
    
    return 0;
}
