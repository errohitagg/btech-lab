/*				Program No. :
Aim : WAP to print the Floyd's Triangle:
	1
	2   3
	4   5   6
	7   8   9   10
	11 12 13 14 15
*/

public class Program02
{
	public static void main(String args[])
	{
		System.out.println();
		int i,j,n,count=1;
		n = Integer.parseInt(args[0]);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++,count++)
				System.out.print(count + " ");
			System.out.println();
		}
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/