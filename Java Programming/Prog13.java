/*					Program No. :-
Aim :- WAP for implementing Database Connectivity in Java
*/

import java.util.Scanner;
import java.sql.*;

public class Prog13
{
	public static void main(String[] args)
	{
		Connection connect;
		String name, query;
		int option;
		PreparedStatement executeQuery;
		ResultSet resultSet;
		Scanner read = new Scanner(System.in);
		
		try
		{
			Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
			connect = DriverManager.getConnection("jdbc:odbc:Prog13_jdbc", "", "");
			System.out.println("\nConnection to the database succesfully established.");
			
			do
			{
				System.out.print("\nEnter the name to be searched: ");
				name = read.nextLine();				
				try
				{
					query = "select * from Prog13_table where Name=?";
					executeQuery = connect.prepareStatement(query);
					executeQuery.setString(1, name);
					resultSet = executeQuery.executeQuery();
					if(resultSet.next() == true)
					{
						System.out.println("\nStudent Details:");
						System.out.println("Roll No.: " + resultSet.getString("RollNo"));
						System.out.println("Name: " + resultSet.getString("Name"));
						System.out.println("Branch: " + resultSet.getString("Branch"));
					}
				}
				catch(SQLException e)
				{
					System.out.println("\nQuery couldn't be execute succesfully.");
				}
				System.out.print("\nDo you want to continue (1 - Yes): ");
				option = read.nextInt();
			}while(option == 1);
			
			connect.close();
			System.out.println("\nConnection to the database succesfully closed.");
		}
		catch(ClassNotFoundException e)
		{
			System.out.println("\nConnection Class can't be loaded.");
		}
		catch(SQLException e)
		{
			System.out.println("\nConnection to the database failed.");
		}		
	}
}

/*
Name -Rohit Aggarwal
Roll No. - 7CS-097
*/