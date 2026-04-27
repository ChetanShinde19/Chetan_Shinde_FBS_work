public class Question_2 {
public static void main(String[] args) {
    
int a=3,b=2,c=3;
    // printf("enter the 3 sides of triangle:");
    // scanf("%d %d %d", &a, &b, &c);
    if (a+b<=c||b+c<=a||a+c<=b)
    {
        System.out.printf("Not a valid traiangle:\n");
        /* code */
    }
    else if (a == b && b == c) {
        System.out.printf("Equilateral triangle\n");
    }
    else if (a == b || b == c || a == c) {
        System.out.printf("Isosceles triangle\n");
    }
    else {
        System.out.printf("Scalene triangle\n");
    }
    
}
}



