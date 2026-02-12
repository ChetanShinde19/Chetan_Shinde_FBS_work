#include<stdio.h>
void case_();
int main()
{
    case_();
    return 0;
}

void case_(){
        char ch='H';
    if (ch>='A'&& ch<='a')
    {
        printf("%c is uppercase",ch);
        /* code */
    }
    else{
        printf("%c is lowercase",ch);
    }
}