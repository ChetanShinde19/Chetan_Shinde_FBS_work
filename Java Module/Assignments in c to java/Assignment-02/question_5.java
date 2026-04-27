//public class question_5 {
//public static void main(String[] args) {
//        float price=3000,discount=0;
//    char student='n';
//    // printf("are you student? (y/n):");
//    // scanf(" %c",&student);
//    // printf("enter the price:");
//    // scanf("%f",&price);
//    if (student=='y'||student=='Y')
//    {
//        if (price>500)
//        {
//            discount=price*0.20f;
//        }
//        else
//        {
//            discount=price*0.10f;
//        }
//    }
//    else if  (student == 'n' || student == 'N'){
//         if (price>600)
//        {
//            discount=price*0.15f;
//        }
//        else{
//            discount=price*0.00f;
//        }
//    }
//    
//    System.out.printf("Discounted amount:%.2f \n",discount);
//    System.out.printf("Total amount :%.2f",price-discount);
//}
//    
//}

import java.util.Scanner;

public class question_5 {
    public static void main(String[] args) {

        int a, b, c;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the 3 sides of triangle: ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        if (a + b <= c || b + c <= a || a + c <= b) {
            System.out.println("Not a valid triangle");
        }
        else if (a == b && b == c) {
            System.out.println("Equilateral triangle");
        }
        else if (a == b || b == c || a == c) {
            System.out.println("Isosceles triangle");
        }
        else {
            System.out.println("Scalene triangle");
        }
    }
}