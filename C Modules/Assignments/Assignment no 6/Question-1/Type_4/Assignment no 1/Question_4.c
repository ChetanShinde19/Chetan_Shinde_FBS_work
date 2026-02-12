#include<stdio.h>
int vowel(char ch)
{

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    char result=vowel(ch);
    if(result==1){
        printf("'%c' is a vowel",ch);
    }
    else{
        printf("'%c' is consonant",ch);
    }
    return 0;
}