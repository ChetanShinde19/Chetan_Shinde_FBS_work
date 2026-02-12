#include<stdio.h>
int calculate()
{
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
    else{
        printf("%d is not divisible by 0\n");
    }

    }
    else if (op=='%')
    {
        if (b!=0)
        {
          return a%b;
            /* code */
        }
        else{
            printf("%d is not modulo by 0\n"); 
        }
    }

    else{
        printf("Invalid operator\n");
        return 0;
    }
}
int main()
{
   int result=calculate();
   printf("Result=%d",result);
    return 0;
}
