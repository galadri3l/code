import java.util.*;
abstract class Area
{
	abstract double area();
}

class Triangle extends Area
{
	double len,bre;
	Triangle(double a,double b)
	{
		len = a;
		bre = b;
	}
	double area()
	{
		return len*bre;
	}
}

class Circle extends Area
{
	double radius;
	Circle(double r)
	{
		radius = r;
	}
	double area()
	{
		return Math.PI *  Math.pow(radius,2);
	}
}

class Test
{
	public static void main(String arg[])
	{
		double l,b,r;
		Scanner sc = new Scanner(System.in);
		System.out.println("Input length, breadth of rectagle and radius of circle");
		l = sc.nextFloat();b = sc.nextFloat();r = sc.nextFloat();
		Triangle t1 = new Triangle(l,b);
		Circle c1 = new Circle(r);
		System.out.println("Area of rectanble = " + t1.area() + "\nArea of circle = " + c1.area());
		System.out.format("Area of rectable = %.3f \nArea of circle = %.3f\n",t1.area(),c1.area());

	}
}