#include<stdio.h>
int palindrome()
{
    int num,first,last;
    int *ptr=&num;
    printf("Enter the 3-digit number:");
    scanf("%d",ptr);
    first=*ptr/100;
    last=*ptr%10;
    if(*ptr>=100 && *ptr<=999 && first==last){
        return 1;
    }
    else{
        return 0;
} 
}
int main()
{
    if(palindrome()){
    printf("it is palindrome number");
    }
    else{
    printf("it is not palindrome number");
    }
    return 0;
}