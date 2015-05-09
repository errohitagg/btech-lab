/*				Program No. : 
Aim : WAP to swap two numbers.
*/

public class Program10
{
	public static void main(String... args)
	{
		float no1,no2,temp;
		no1 = Float.parseFloat(args[0]);
		no2 = Float.parseFloat(args[1]);
		System.out.println("\nNumber 1 : " + no1);
		System.out.println("Number 2 : " + no2);
		temp = no1;
		no1 = no2;
		no2 = temp;
		System.out.println("\nAfter Swapping\n\nNumber 1 : " + no1);
		System.out.println("Number 2 : " + no2);
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/