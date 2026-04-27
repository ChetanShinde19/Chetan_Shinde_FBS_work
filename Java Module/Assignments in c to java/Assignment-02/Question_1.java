package 
public class Question_1 {

    public static void main(String args[])
    {
        
    int a=10,b=10;
    char op='*';

    // printf("enter first number:");
    // scanf("%d",&a);
    // printf("enter second number:\n");
    // scanf(" %d",&b);
    // printf("enter the operators:\n");
    // scanf(" %c", &op);
    if (op=='+')
    {
        System.out.printf("result=%d\n",a+b);
        /* code */
    }
    
    else if (op=='-')
    {
        System.out.printf("result=%d\n",a-b);
        /* code */
    }

    else if (op=='*')
    {
        System.out.printf("result=%d\n",a*b);
        /* code */
    }

    else if (op=='/'){
    if (b!=0)
    {
        System.out.printf("result=%d\n",a/b);
        /* code */
    }
    else{
        System.out.printf("%d is not divisible by 0\n");
    }

    }
    else if (op=='%')
    {
        if (b!=0)
        {
            System.out.printf("result=%d\n",a%b);
            /* code */
        }
        else{
            System.out.printf("%d is not modulo by 0\n"); 
        }
        /* code */
    }


    }
}