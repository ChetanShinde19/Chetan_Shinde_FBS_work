public class Question_3 {

    public static void main(String[] args) {
            int year=2008;
    if ((year%400==0)||(year%4==0&&year%100!=0))
    {
        System.out.printf("%d is a leap year",year);
    }
    else
    {
        System.out.printf("%d is not a leap year",year);
    }
    }
}