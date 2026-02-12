#include<stdio.h>
void palindrome();
void palindrome(){
      int num,first,last;
    printf("Enter the 3-digit number:");
    scanf("%d",&num);
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
    palindrome();
    return 0;
}