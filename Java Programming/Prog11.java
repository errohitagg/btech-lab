/*					Program No. :-
Aim :- WAP to find the address of Local Host of the machine
*/

import java.net.*;

public class Prog11
{
    public static void main(String args[])
	{
        try
		{
            InetAddress address = InetAddress.getLocalHost();
            System.out.print("\n\tAddress of the Local host: ");
            System.out.println(address);
        }
		catch (UnknownHostException e)
		{
            System.out.println("\nError finding the Address of Local Host.");
        }
    }
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/