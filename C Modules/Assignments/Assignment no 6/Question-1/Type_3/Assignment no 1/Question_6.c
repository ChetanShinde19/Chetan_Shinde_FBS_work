#include<stdio.h>
void  letter(char ch)
{
    

    if (ch>='A'&& ch<='a')
    {
        printf("%c is uppercase",ch);
        /* code */
    }
    else if (ch>='0'&&ch<='9')
    {
        printf("please a letter");
        /* code */
    }
    else{
        printf("%c is lowercase",ch);
    }
}
int main()
{
        char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    letter(ch);
    return 0;
}