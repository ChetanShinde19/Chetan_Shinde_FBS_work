#include<stdio.h>
int vowel(char ch,char arr[10]);

int main()
{
    char ch,arr[10];
    if(vowel(ch,arr)){
        printf(" is a vowel");
    }
    else{
        printf(" is consonant");
    }
    return 0;
}

int vowel(char ch,char arr[10])
{
      
      char *ptr=&arr[ch];
    printf("Enter the character:\n");
    scanf("%c",ptr);
    if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'){
        return 1;
    }
    else{
        return 0;;
    }
}