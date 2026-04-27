class Calculator {
    // addition
    void add(int a, int b) {
        System.out.println("Addition: " +(a + b));
    }

    void add(double a, double b) {
        System.out.println("Addition: " + (a + b));
    }

    void add(int a, double b) {
        System.out.println("Addition: " + (a + b));
    }

    void add(double a, int b) {
        System.out.println("Addition: " + (a + b));
    }

    // substraction
    void sub(int a, int b) {
        System.out.println("substraction: " + (a - b));
    }

    void sub(double a, double b) {
        System.out.println("substraction: " + (a - b));
    }

    void sub(int a, double b) {
        System.out.println("substraction: " + (a - b));
    }

    void sub(double a, int b) {
        System.out.println("substraction: " + (a - b));
    }

    // multiplication
    void multi(int a, int b) {
        System.out.println("Multiplication: " + (a * b));
    }

    void multi(double a, double b) {
        System.out.println("Multiplication: " + (a * b));
    }

    void multi(int a, double b) {
        System.out.println("Multiplication: " + (a * b));
    }

    void multi(double a, int b) {
        System.out.println("Multiplication: " + (a * b));
    }

    // division
    void div(int a, int b) {
        System.out.println("Division: " + (a / b));
    }

    void div(double a, double b) {
        System.out.println("Division: " + (a / b));
    }

    void div(int a, double b) {
        System.out.println("Division: " + (a / b));
    }

    void div(double a, int b) {
        System.out.println("Division: " + (a / b));
    }

}

public class question_01 {
    public static void main(String[] args) {
        Calculator c1 = new Calculator();
        c1.add(4, 7.5);
        c1.sub(9.5, 4);
        c1.multi(9.5, 4);
        c1.div(10, 4);


    }
}
