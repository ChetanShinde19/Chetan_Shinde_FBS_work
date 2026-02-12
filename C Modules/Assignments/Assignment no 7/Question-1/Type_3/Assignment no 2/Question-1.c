#include<stdio.h>
int calculate()
{
    int a,b;
    char op;
    int *ptr1=&a;
    int *ptr2=&b;

    printf("enter first number:");
    scanf("%d",ptr1);
    printf("enter second number:\n");
    scanf(" %d",ptr2);
    printf("enter the operators:\n");
    scanf(" %c", &op);
      if (op=='+')
    {
        return *ptr1+*ptr2;
    }
    
    else if (op=='-')
    {
       return *ptr1-*ptr2;
    }

    else if (op=='*')
    {
        return *ptr1**ptr2;
    }

    else if (op=='/'){
    if (b!=0)
    {
        return *ptr1 / *ptr2;
    }
    else{
        printf("%d is not divisible by 0\n");
    }

    }
    else if (op=='%')
    {
        if (*ptr2!=0)
        {
          return *ptr1%*ptr2;
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
