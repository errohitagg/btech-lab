/*				Program No. :
Aim : WAP to implement method overloading by calculating the area of different geometrical figures.
*/

class Area
{
	double a,b,c;
	double CalculateArea(float a)
	{
		return(3.14*a*a);
	}
	double CalculateArea(float a,float b)
	{
		return(a*b);
	}
	double CalculateArea(float a,float b,float c)
	{
		float temp;
		temp = (a+b+c)/2;
		return(Math.sqrt(temp*(temp-a)*(temp-b)*(temp-c)));
	}
}

public class Program15
{
	public static void main(String[] args)
	{
		int len = args.length;
		Area var = new Area();
		switch(len)
		{
			case 1: System.out.println("\nArea of the circle is : " + var.CalculateArea(Float.parseFloat(args[0])));
				break;
			case 2: System.out.println("\nArea of the rectangle is : " + var.CalculateArea(Float.parseFloat(args[0]),Float.parseFloat(args[1])));
				break;
			case 3: System.out.println("\nArea of the triangle is : " + var.CalculateArea(Float.parseFloat(args[0]),Float.parseFloat(args[1]),Float.parseFloat(args[2])));
				break;
			default: System.out.println("\nIncorrect number of dimensions.");
		}
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/