/*				Program No. :
Aim : WAP to print the following pattern:
	1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5
*/

public class Program01
{
	public static void main(String... args)
	{
		System.out.println();
		int i,j,n;
		n = Integer.parseInt(args[0]);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				System.out.print(i + " ");
			System.out.println();
		}		
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/