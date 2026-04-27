class Shape {
    void CalculateArea(Triangle t) {
        double area = 0.5 * t.base * t.height;
        System.out.println("Area of Triangle: " + area);
    }

    void CalculateArea(Rectangle r) {
        double area = r.length * r.breadth;
        System.out.println("Area of rectangle: " + area);
    }

    void CalculateArea(Circle c) {
        double area = 3.14 * c.radius;
        System.out.println("Area of Circle: " + area);
    }
}
    class Triangle {
        double base, height;

        Triangle(double base, double height) {
            this.base = base;
            this.height = height;
        }
    }

    class Rectangle {
        double length, breadth;

        Rectangle(double length, double breadth) {
            this.length = length;
            this.breadth = breadth;
        }
    }

    class Circle {
        double radius;

        Circle(double radius) {
            this.radius = radius;
        }
    }
public class Area_calculation_system {
    public static void main(String[] args) {
        Shape s = new Shape();
        Triangle t = new Triangle(10,5);
        Rectangle r = new Rectangle(8,4);
        Circle c = new Circle(3);
        s.CalculateArea(t);
        s.CalculateArea(r);
        s.CalculateArea(c);
        
    }
}
