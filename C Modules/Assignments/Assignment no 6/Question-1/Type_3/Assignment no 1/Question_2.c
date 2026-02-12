#include<stdio.h>
void palindrome(int num){
    int first,last;
    first=num/100;
    last=num%10;
    if(num>=100 && num<=999 && first==last){
    printf("%d it is palindrome number",num);
    }
    else{
    printf("%d it is not palindrome number",num);
}
}
int main()
{
    int num;
    printf("Enter the 3-digit number:");
    scanf("%d",&num);
    palindrome(num);
    return 0;
}