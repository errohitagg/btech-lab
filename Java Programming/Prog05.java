/*					Program No. :- 
Aim :- WAP to demonstrate the concept of Method Overriding.
*/

class Class_01
{
	int i, j;
	Class_01(int a, int b)
	{
		i=a;
		j=b;
	}
	
	void show()
	{
		System.out.println("In Base Class, i = " + i + " and j = " + j);
	}
}

class Class_02 extends Class_01
{
	int k;
	Class_02(int a, int b, int c)
	{
		super(a,b);
		k=c;
	}

	void show ()
	{
		System.out.println("In derived Class, k = " + k);
	}
}

public class Prog05
{
	public static void main(String args[])
	{
		Class_01 object_01 = new Class_01(1,2);
		object_01.show();
		
		Class_02 object_02 = new Class_02(1,2,3);
		object_02.show();		
	}
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/