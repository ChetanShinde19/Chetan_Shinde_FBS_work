
#include<stdio.h>
int lower_uppercase(){
char ch;
      printf("enter the character:");
    scanf("%c",&ch);
    if (ch>='A'&& ch<='a')
    {
        return 1;
    }
    else if (ch>='0'&&ch<='9')
    {
        return 2;
        /* code */
    }
    
    else{
       return 0;
    }
}
int main()
{
    int result=lower_uppercase();
    if (result==1)
    {
        printf(" is uppercase");
        /* code */
    }
     else if (result==2)
    {
        printf("Enter a valid word");
        return 0;
        /* code */
    }
    else{
        printf(" is lowercase");
    }
    return 0;
}