public class Question_2 {

    public static void main(String[] args) {
            int num=121,first,last;
    first=num/100;
    last=num%10;
    if(num>=100 && num<=999 && first==last){
    System.out.printf("%d it is palindrome number",num);
    }
    else{
    System.out.printf("%d it is not palindrome number",num);
}
    }
}