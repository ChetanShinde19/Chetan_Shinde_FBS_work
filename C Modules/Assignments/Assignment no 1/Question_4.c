#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'){
        printf("'%c' is a vowel",ch);
    }
    else{
        printf("'%c' is consonant",ch);
    }
    return 0;
}