public class Question_4 {

    public static void main(String[] args) {
        
    char ch ='o';
    // printf("Enter the character:\n");
    // scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'){
        System.out.printf("'%c' is a vowel",ch);
    }
    else{
        System.out.printf("'%c' is consonant",ch);
    }
    }
}