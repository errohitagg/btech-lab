/*				Program No. :
Aim : WAP to determine the sum of the following harmonic series for a given value of n:
	1 + 1/2 + 1/3 + 1/4 + 1/5 + .................... + 1/n
*/

public class Program14
{
	public static void main(String args[])
	{
		int i,n = Integer.parseInt(args[0]);
		float sum=1.0f;
		System.out.print("\n1");
		for(i=2;i<=n;i++)
		{
			sum += 1.0/i;
			System.out.print(" + 1/" + i);
		}
		System.out.println("\n\nSum of the harmonic series is " + sum);
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/