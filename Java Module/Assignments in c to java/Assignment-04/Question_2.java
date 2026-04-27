public class Question_2 {

    public static void main(String[] args) {
        
    int n=2,flag=1;
    // printf("enter the number:");
    // scanf(" %d", &n);
    System.out.printf("prime number between 1 & %d are :\n",n);
      if (n<=1)
    {
        System.out.printf("It is not prime number:\n");
    }
    for (int i = 2; i <=n; i++)
    {
        flag=1;
        for(int j=2;j<=i/2;j++)
        {
            if (i%j==0)
        {
            flag=0;
            break;
        }
        }
       
     if (flag==1)
    {
        System.out.printf("%d is prime number\n",i);
    }
    else{
        System.out.printf("%d is not a prime number\n",i);
    }
        
    }
   

    }
}