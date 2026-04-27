public class Question_3 {
    public static void main(String[] args) {
           int n=3,sum;
    // printf("Enter the number:\n");
    // scanf(" %d",&n);
    if (n<=1)
    {
        System.out.printf("%d not perfect number",n);
    }
    
    System.out.printf("Perfect number from 1 to %d are:\n",n);

    for(int i=1;i<=n;i++)
    {
        sum=0;

        for (int j = 1; j <=i/2; j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
                /* code */
            }
            
            /* code */
        }

        if (sum==i)
        {
            System.out.printf("%d is a perfect number\n",i);
            /* code */
        }
        else {
            System.out.printf("%d is a not perfect number\n",i);
        }
    }
    }
}