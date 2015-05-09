/*				Program No. :
Aim : WAP to find the factorial of a number.
*/

public class Program06
{
	public static void main(String[] args)
	{
		System.out.println();
		int i,n,ans=1;
		n = Integer.parseInt(args[0]);
		for(i=1;i<=n;i++)
		{
			ans*=i;
		}
		System.out.println(n + "! = " + ans);
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/