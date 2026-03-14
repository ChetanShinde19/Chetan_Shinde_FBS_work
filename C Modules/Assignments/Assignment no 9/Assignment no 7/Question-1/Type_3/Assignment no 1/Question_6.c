#include<stdio.h>
int lower_uppercase(char ch,char arr[ch]);

int main()
{
    char ch,arr[ch];
    int result=lower_uppercase(ch,arr);
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

int lower_uppercase(char ch,char arr[ch])
{

char *ptr=&arr[ch];
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