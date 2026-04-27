public class Question_9 {

    public static void main(String[] args) {
            int num=121,temp,rev=0,digit;
    // printf("Enter the number:");
    // scanf(" %d", &num);
    temp=num;
    while (temp>0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if (rev==num)
    {
        System.out.printf("%d is a palindrome",num);
    }
    else{
        System.out.printf("%d is not a palindrome",num);
    }
    }
}