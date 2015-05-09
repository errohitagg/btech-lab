/*				Program No. :
Aim : WAP to print the Fibonacci series:
	1 1 2 3 5 8 13 21 34 55 .......
*/

public class Program03
{
	public static void main(String[] args)
	{
		System.out.println();
		int i,n,a=1,b=1,temp;
		n = Integer.parseInt(args[0]);
		System.out.print("Fibonacci Series is : \n\n" + a + " " + b + " ");
		for(i=3;i<=n;i++)
		{
			System.out.print(a+b + " ");
			temp=a;
			a=b;
			b+=temp;
		}
		System.out.println();
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/