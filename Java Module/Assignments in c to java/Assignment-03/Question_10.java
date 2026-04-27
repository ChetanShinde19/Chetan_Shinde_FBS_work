public class Question_10 {

    public static void main(String[] args) {
        {
    int n=10, first, last;

    // printf("Enter the number:\n");
    // scanf("%d", &n);

    last = n % 10;   
    while (n >= 10)
    {
        n = n / 10;   
    }
    first = n;      
    System.out.printf("Sum :%d", first + last);
    }
}
}