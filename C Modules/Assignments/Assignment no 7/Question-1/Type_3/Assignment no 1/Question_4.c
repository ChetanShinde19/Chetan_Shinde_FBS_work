#include<stdio.h>
int vowel(){
      char ch;
      char *ptr=&ch;
    printf("Enter the character:\n");
    scanf("%c",ptr);
    if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'){
        return 1;
    }
    else{
        return 0;;
    }
}
int main()
{
    if(vowel()){
        printf(" is a vowel");
    }
    else{
        printf(" is consonant");
    }
    return 0;
}