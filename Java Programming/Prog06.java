/*					Program No. :-
Aim :- WAP for demonstrating the concept of Multiple Inheritance.
*/

interface interface_01
{
	void show();
}

class class_01
{
	void display()
	{
		System.out.println("This is the method implementation of 'display' of base class 'class_01'");
	}
}

class class_02 extends class_01 implements interface_01
{
	public void show()
	{
		System.out.println("This is the method implementation of 'show' of interface 'interface_01'");
	}
}

public class Prog06
{
	public static void main(String args[])
	{
		class_02 object = new class_02();
		object.show();
		object.display();
	}
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/