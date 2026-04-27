//Print strong numbers in the given range 1 to n.
public class Question_4 {

    public static void main(String[] args) {
            int n=10;
    // printf("Enter the number\n");
    // scanf(" %d", &n);
    
   System.out.printf("strong numbers in the given range 1 to %d :\n",n);

    for (int num=1; num<=n;num++)
    {
        int temp=num;
        int sum=0;
        while (temp>0)
        {
            int digit=temp%10;
            int fact=1;
        for (int i = 1; i<=digit; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
        }

    if (sum==num)
    {
        System.out.printf("strong number: %d\n",num);
    }
    else{
        System.out.printf("not a strong number: %d\n",num);
    }   
}
    }
}