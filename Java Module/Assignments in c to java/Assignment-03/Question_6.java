public class Question_6 {

    public static void main(String[] args) {
            int n=10,i=1,sum=0;
    // printf("Enter the number:\n");
    // scanf(" %d",&n);
    while (i<=n/2)
    {
        if (n%i==0)
        sum=sum+i;
        i++;
    }
        if (sum==n)
        {
            System.out.printf("%d is a perfect number",n);
            /* code */
        }
        else {
            System.out.printf("%d is a not perfect number",n);
        }
    }
}