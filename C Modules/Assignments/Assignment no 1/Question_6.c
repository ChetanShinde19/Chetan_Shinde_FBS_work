#include<stdio.h>
int main()
{
    char ch='H';
    if (ch>='A'&& ch<='a')
    {
        printf("%c is uppercase",ch);
        /* code */
    }
    else{
        printf("%c is lowercase",ch);
    }
    return 0;
}