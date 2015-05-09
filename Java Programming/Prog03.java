/*					Program No. :- 
Aim :- WAP to demonstrate the implementation of Interfaces.
*/

interface general
{
	void method_1();
}

class specific implements general
{
	public void method_1()
	{
		System.out.println("\nImplementation for the method of 'general' Interface in 'specific' class");
	}
}

public class Prog03
{
	public static void main(String args[])
	{
		specific object = new specific();
		object.method_1();
	}
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/