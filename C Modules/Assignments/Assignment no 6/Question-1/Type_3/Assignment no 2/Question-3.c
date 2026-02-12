#include<stdio.h>
void greater_numb(int a,int b,int c){
        if (a>=b)
    {
        printf("%d is greater then %d & %d",a,b,c);
        /* code */
    }
    else{
        if (b>=c)
        {
            printf("%d is greater then %d & %d",b,c,a);
            /* code */
        }
        else{
            if (c>=a)
            {
                printf("%d is greater then %d & %d",c,a,b);
                /* code */
            }
        }        
    }
}
int main()
{
    int a,b,c;
    printf("enter the 3 number:");
    scanf("%d %d %d",&a,&b,&c);
    greater_numb(a,b,c);
    return 0;
}
