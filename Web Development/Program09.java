/*				Program No. :
Aim : WAP to find the area of a rectangle using class and object.
*/

class Rectangle
{
	float x,y;
	Rectangle(float x, float y)
	{
		this.x = x;
		this.y = y;
		System.out.println("Dimension 1 : " + x);
		System.out.println("Dimension 2 : " + y);
	}
	float Area()
	{
		return(x*y);
	}
}

public class Program09
{
	public static void main(String[] args)
	{
		System.out.println();
		Rectangle rect = new Rectangle(Float.parseFloat(args[0]), Float.parseFloat(args[1]));
		System.out.println("\nArea of Rectangle is : " + rect.Area());
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/