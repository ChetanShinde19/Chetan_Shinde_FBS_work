// 6. Character Classification

// Read a character:

// If alphabe

// Check if uppercase or lowercase

// Else

// If digit → Digit

// Else → Special character
#include<stdio.h>
int main(){
    char ch;
    printf("enter the Character:");
    scanf(" %c", &ch);
    if (ch>='a'&& ch<='z')
    {
        printf("%c it is lowercase\n",ch);
        
        /* code */
    }
    else if ((ch>='A'&& ch<='Z'))
    {
        printf("%c it is uppercase\n", ch);
    }
    else if (ch>='0'&&ch<='9')
        {
            printf("%c is digit\n", ch);
            /* code */
        }
        else{
            if (((ch!='A'&& ch!='Z') || ch!='a'&& ch!='z')||(ch!='0'&&ch!='9'))
            {
                printf("%c Special character\n",ch);
                /* code */
            }    
        }
       return 0; 
    }
    
    
