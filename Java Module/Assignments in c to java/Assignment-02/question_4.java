public class question_4 {
public static void main(String[] args) {
       int marks=45;
//    printf("Enter the marks:");
//    scanf("%d",&marks);
   if (marks>75)
   {
    System.out.printf("Distinction",marks);
    /* code */
   }
   else if (marks>65)
   {
    System.out.printf("First Class",marks);
    /* code */
   }
   else if (marks>55)
   {
    System.out.printf("Second Class",marks);
    /* code */
   }
   else if (marks>=40)
   {
    System.out.printf("Pass Class",marks);
    /* code */
   }
   else if (marks<=40)
   {
    System.out.printf("Fail",marks);
    /* code */
   }
}
   
}