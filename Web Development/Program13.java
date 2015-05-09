/*				Program No. :
Aim : WAP to create a copy of the file located by the user at run time.
*/

import java.io.*;

public class Program13
{
	public static void main(String... args)
	{
		String temp;
		File input = new File(args[0]);
		File output = new File("Program13.txt");
		try
		{
			FileReader tempin = new FileReader(input);
			FileWriter tempout = new FileWriter(output);
			BufferedReader in = new BufferedReader(tempin);
			BufferedWriter out = new BufferedWriter(tempout);
			System.out.println("\nThe data is being read from the file :");
			System.out.println(input.getAbsolutePath() + "\n");
			System.out.println("The data is being written into the file :");
			System.out.println(output.getAbsolutePath() + "\n");
			System.out.println("Data is :\n");
			while((temp = in.readLine()) != null)
			{
				out.write(temp);
				System.out.println(temp);
			}
			in.close();
			out.close();
			tempin.close();
			tempout.close();
		}
		catch(Exception e)
		{
			System.out.println(e);	
		}
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/