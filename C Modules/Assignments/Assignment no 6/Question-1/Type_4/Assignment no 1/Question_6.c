#include<stdio.h>
int upper_lowercase(char ch)
{
    
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
    char ch;
    printf("Enter the word");
    scanf("%c",&ch);
    char result=upper_lowercase(ch);
    if (result==1)
    {
        printf("%c is uppercase",ch);
        /* code */
    }
    else if (result==2)
    {
        printf("%c! Enter a valid word",ch);
        /* code */
    }
    
    else{
        printf("%c is lowercase",ch);
    }
    return 0;
}