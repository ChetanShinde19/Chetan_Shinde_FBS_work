
#include<stdio.h>
int lower_uppercase(){
char ch;
char *ptr=&ch;
      printf("enter the character:");
    scanf("%c",ptr);
    if (*ptr>='A'&& *ptr<='a')
    {
        return 1;
    }
    else if (*ptr>='0' && *ptr<='9')
    {
        return 2;
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
    }
     else if (result==2)
    {
        printf("Enter a valid word");
        return 0;
    }
    else{
        printf(" is lowercase");
    }
    return 0;
}