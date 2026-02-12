#include<stdio.h>
void prime()
{
    int n,i=2,flag=1;
    printf("enter the number:");
    scanf(" %d", &n);
    if (n <= 1)
    {
        printf("%d is not a prime number\n", n);
        return; 
    } 

    while (i*i<=n)
    {
        if (n % i == 0)
        {
            flag = 0;   // correct assignment
            break;
        }
        i++;
    }

    // for ( int i = 2; i <=n/2; i++)
    // {
    //      if (n%i==0)
    //     {
    //         flag=0;
    //         break;
          
    //     }
        
    // }
    if (flag == 1){
        printf("%d is a prime number\n", n);
    }  
    else{
        printf("%d is not a prime number\n", n);
    }
        

}



int main()
{
    prime();
    return 0;
}