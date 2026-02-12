#include<stdio.h>
int palindrome()
{
    int num,first,last;
    printf("Enter the 3-digit number:");
    scanf("%d",&num);
    first=num/100;
    last=num%10;
    if(num>=100 && num<=999 && first==last){
        return 1;
    }
    else{
        return 0;
} 
}
int main()
{
    int num,first,last;
    if(palindrome()){
    printf("it is palindrome number");
    }
    else{
    printf("it is not palindrome number");
}
    return 0;
}