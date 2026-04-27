public class Question_3 {

    public static void main(String[] args) {
            int sum=0,end=10,start=1;
    // printf("Enter the start value:");
    // scanf(" %d",&start);
    
    // printf("Enter the end value:");
    // scanf(" %d",&end);
    while (start<=end)
    {
        sum=sum+start;
        start++;
    }
    System.out.printf("output: %d",sum);
    }
}