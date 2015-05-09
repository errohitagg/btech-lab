/*					Program No. :- 
Aim :- WAP to demonstrate Method Overloading.
*/

import java.io.*;

public class Prog02
{
	private void overload()
	{
		System.out.println("Overload without Parameters");
	}
	
	private void overload(int a)
	{
		System.out.println("Overload with Integer Parameter: " + a);
	}
	
	private void overload(int a, int b)
	{
		System.out.println("Overload with 2 Integer Parameters: " + a + " and " + b);
	}
	
	private void overload(float a)
	{
		System.out.println("Overload with Float Parameter: " + a);
	}
	
	public static void main(String... args)
	{			
		Prog02 object = new Prog02();
		object.overload();
		object.overload(2);
		object.overload(3,9);
		object.overload(4.5f);
	}
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/