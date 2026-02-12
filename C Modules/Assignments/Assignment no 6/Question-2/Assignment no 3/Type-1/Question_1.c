#include<stdio.h>
void numb();
void numb()
{
    int n;
    int i=1;
    printf("Enter number:\n");
    scanf(" %d", &n);
    while (i<=n)
    {
        printf(" %d",i);
        i++;
    }
    
    // for(int i=1;i<=n;i++){
    //     printf(" %d",i);
    // }
}
int main()
{
    numb();
    return  0;
}