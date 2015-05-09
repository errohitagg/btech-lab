/*				Program No. :
Aim : WAP to take input from the user and write it into a file.
*/

import java.io.*;

public class Program12
{
	public static void main(String[] args)
	{
		File output = new File("Program12.txt");
		try
		{
			FileWriter out = new FileWriter(output);
			System.out.println("\nThe data is being written into the file :");
			System.out.println(output.getAbsolutePath() + "\n");
			System.out.println("Data is :\n");
			for(String temp : args)
			{
				System.out.print(temp + " ");
				out.write(temp + " ");
			}	
			out.close();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		System.out.println();
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/