#include<stdio.h>
void numb(int n)
{
    int i=1;
    while (i<=n)
    {
        printf(" %d",i);
        i++;
        /* code */
    }
    
    // for(int i=1;i<=n;i++){
    //     printf(" %d",i);
    // }
}
int main()
{
    int n,i=1;
    printf("Enter number:\n");
    scanf(" %d", &n);
   numb(n);
   return 0;
}