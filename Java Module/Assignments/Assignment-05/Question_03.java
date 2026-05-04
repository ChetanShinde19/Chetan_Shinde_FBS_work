class Shape {
	double area;

	public double getArea() {
		return this.area;
	}

	void setArea(double area) {
		this.area = area;
	}

public Shape(double area) {
	super();
	this.area = area;
}

void display()
{
	System.out.println("Area: "+this.area);
}
}


//circle
class Circle extends Shape
{
	double radius;

	double getRadius() {
		return this.radius;
	}

	void setRadius(double radius) {
		this.radius = radius;
		
	}

	Circle(double radius) {
		super(3.14*radius*radius);
		this.radius = radius;
	}
@Override
void display()
{
	super.display();
	System.out.println("Radius: "+this.radius);
}
}

//triangle
class Triangle extends Shape
{
	double base;
	double height;
	
	double getBase() {
		return this.base;
	}
	void setBase(double base) {
		this.base = base;
	}
	double getHeight() {
		return this.height;
	}
	void setHeight(double height) {
		this.height = height;
	}

	
	Triangle(double base, double height) {
		super(0.5*base*height);
		this.base = base;
		this.height = height;
	}
	
	@Override
	void display()
	{
		super.display();
		System.out.println("Base: "+this.base);
		System.out.println("Height: "+this.height);
	}
}

//rectangle
class Rectangle extends Shape

{
	double length;
	double breadth;
	
	public double getLength() {
		return this.length;
	}

	public void setLength(double length) {
		this.length = length;
	}

	public double getBreadth() {
		return breadth;
	}

	public void setBreadth(double breadth) {
		this.breadth = breadth;
	}

	Rectangle(double length, double breadth) {
		super(length*breadth);
		this.length = length;
		this.breadth = breadth;
		
	}

	@Override
	void display()
	{
		super.display();
		System.out.println("Length: "+this.length);
		System.out.println("Breadth: "+this.breadth);
	}
}
public class Question_03 {
    public static void main(String[] args) {
       Shape s1;
		s1= new Circle(5);
       s1= new Triangle(4,6);
       s1= new Rectangle(3, 7);
       
       System.out.println("Circle: ");
       s1.display();
       
       System.out.println("\nTriangle: ");
       s1.display();
       
       System.out.println("\nRectangle: ");
       s1.display();
        
        
    }
}
