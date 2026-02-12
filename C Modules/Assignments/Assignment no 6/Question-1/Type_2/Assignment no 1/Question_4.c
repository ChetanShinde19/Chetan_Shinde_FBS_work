#include<stdio.h>
int vowel(){
      char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'){
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