/*				Program No. :
Aim : WAP to print the multiplication table of a number.
*/

public class Program04
{
	public static void main(String... args)
	{
		System.out.println();
		int n,i;
		n = Integer.parseInt(args[0]);
		System.out.println("Multiplication table of " + n + " is : \n");
		for(i=1;i<=10;i++)
			System.out.println(n + " * " + i + " = " + n*i);
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/