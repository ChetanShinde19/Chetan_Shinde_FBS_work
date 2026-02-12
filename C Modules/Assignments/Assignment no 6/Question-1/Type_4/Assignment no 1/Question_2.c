#include<stdio.h>
int palindrome(int num,int first,int last)
{
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
    printf("Enter the 3-digit number:");
    scanf("%d",&num);
     int result=palindrome(num,first,last);
    first=num/100;
    last=num%10;
    if(result==1){
    printf("%d it is palindrome number",num);
    }
    else{
    printf("%d it is not palindrome number",num);
}
    return 0;
}