#include<stdio.h>
int number(int a,int b,char op)
{
   if (op=='+')
    {
        return a+b;
        /* code */
    }
    
    else if (op=='-')
    {
        return a-b;
        /* code */
    }

    else if (op=='*')
    {
        return a*b;
        /* code */
    }

    else if (op=='/'){
    if (b!=0)
    {
        return a/b;
        /* code */
    }


    }
    else if (op=='%')
    {
        if (b!=0)
        {
            return a%b;
            /* code */
        }
    }
    else{
            return 0;
}
}
int main()
{
    int a,b;
    char op;

    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf(" %d",&b);
    printf("enter the operators:\n");
    scanf(" %c", &op);
    int result=number(a,b,op);
    printf("Result=%d",result);
    return 0;
}
