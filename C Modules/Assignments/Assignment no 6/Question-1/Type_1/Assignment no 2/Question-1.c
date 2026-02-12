#include<stdio.h>
void check();
int main()
{
    check();
    return 0;
}

void check(){
        int a,b;
    char op;

    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf(" %d",&b);
    printf("enter the operators:\n");
    scanf(" %c", &op);
    if (op=='+')
    {
        printf("result=%d\n",a+b);
        /* code */
    }
    
    else if (op=='-')
    {
        printf("result=%d\n",a-b);
        /* code */
    }

    else if (op=='*')
    {
        printf("result=%d\n",a*b);
        /* code */
    }

    else if (op=='/'){
    if (b!=0)
    {
        printf("result=%d\n",a/b);
        /* code */
    }
    else{
        printf("%d is not divisible by 0\n",b);
    }

    }
    else if (op=='%')
    {
        if (b!=0)
        {
            printf("result=%d\n",a%b);
            /* code */
        }
        else{
            printf("%d is not modulo by 0\n",b); 
        }
        /* code */
    }
}
