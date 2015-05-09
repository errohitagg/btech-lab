/*				Program No. :
Aim : WAP to find all the even and odd numbers in a given list.
*/

public class Program11
{
	public static void main(String args[])
	{
		int len = args.length,i;
		int[] arr = new int [len];
		for(i=0;i<len;i++)
			arr[i]=Integer.parseInt(args[i]);
		System.out.println("\nEven Numbers: ");
		for(int temp : arr)
			if(temp%2 == 0)
				System.out.print(temp + " ");
		System.out.println("\n\nOdd Numbers: ");
		for(int temp : arr)
			if(temp%2 != 0)
				System.out.print(temp + " ");
		System.out.println();
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/