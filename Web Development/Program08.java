/*				Program No. :
Aim : WAP to reverse the digits of a number.
*/

public class Program08
{
	public static void main(String args[])
	{
		int n,temp,ans=0;
		n = Integer.parseInt(args[0]);
		System.out.println("\nOriginal Number : " + n);
		while(n!=0)
		{
			temp = n%10;
			ans = (ans*10) + temp;
			n/=10;
		}
		System.out.println("Number after reversing digits : " + ans);
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/