#include<stdio.h>
int even_odd(int no){
    if (no%2==0)
    {
        return 1;
        /* code */
    }
    else{
       return 0;
    }
}
int main()
{
    int no;
    printf("Enter the number:");
    scanf("%d",&no);
    int result=even_odd(no);
    if (result==1)
    {
        printf("%d even",no);
        /* code */
    }
    else{
        printf("%d odd",no);
    }

    return 0;
    
}
