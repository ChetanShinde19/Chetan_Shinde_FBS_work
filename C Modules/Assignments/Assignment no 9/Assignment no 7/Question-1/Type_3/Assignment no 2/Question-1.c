#include<stdio.h>
int calculate(int arr1[10],int arr2[10],int a,int b,char op);

int main()
{
    int arr1[10],arr2[10];
    int a=0,b=0;
    char op;
   int result=calculate(arr1,arr2,a,b,op);
   printf("Result=%d",result);
    return 0;
}

int calculate(int arr1[10],int arr2[10],int a,int b,char op)
{
    
    
    int *ptr1=&arr1[a];
    int *ptr2=&arr2[b];

    printf("enter first number:");
    scanf("%d",ptr1);
    printf("enter second number:\n");
    scanf("%d",ptr2);
    printf("enter the operators:\n");
    scanf(" %c", &op);
      if (op=='+')
    {
        return *ptr1+*ptr2;
    }
    
    else if (op=='-')
    {
       return *ptr1 - *ptr2;
    }

    else if (op=='*')
    {
        return (*ptr1)*(*ptr2);
    }

    else if (op=='/'){
    if (*ptr2 !=0)
    {
        return *ptr1 / *ptr2;
    }
    else{
        printf("is not divisible by 0\n");
        return 0;
    }

    }
    else if (op=='%')
    {
        if (*ptr2!=0)
        {
          return *ptr1%*ptr2;
        }
        else{
            printf("is not modulo by 0\n"); 
            return 0;
        }
    }

    else{
        printf("Invalid operator\n");
        return 0;
    }
}
