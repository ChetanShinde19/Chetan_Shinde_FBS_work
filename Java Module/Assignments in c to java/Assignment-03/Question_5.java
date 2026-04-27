// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong
public class Question_5 {

    public static void main(String[] args) {
            int n=153,i,j,sum=0;
    // printf("Enter number:");
    // scanf(" %d", &n);
    i=n;
    while (i>0)
    {
        j=i%10;
        sum=sum+(j*j*j);
        i=i/10;
        /* code */
    }
    if (sum==n)
    {
        System.out.printf("%d is armstrong number",n);
        /* code */
    }
    else{
        System.out.printf("%d is not armstrong numb",n);
    }
    }
}