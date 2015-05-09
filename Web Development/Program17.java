/*				Program No. :
Aim : WAP to implement Inheritance.
*/

class Employee
{
	String name,id;
	int salary;
	void EmployeeDetails(String name,String id,int salary)
	{
		this.name = name;
		this.id = id;
		this.salary = salary;
	}
	void printEmployeeDetails()
	{
		System.out.println("Employee Name : " + name);
		System.out.println("Employee ID : " + id);
		System.out.println("Employee Salary : " + salary);
	}
}

class Manager extends Employee
{
	int allowance;
	void ManagerDetails(int allowance)
	{
		this.allowance = allowance;
	}	
	void printManagerDetails()
	{
		printEmployeeDetails();
		System.out.println("Manager Allowance : " + allowance);
	}
}

public class Program17
{
	public static void main(String args[]) 
	{
		int len = args.length;
		Employee emp = new Employee();
		Manager mng = new Manager();
		String name = args[0],id = args[1];
		int salary = Integer.parseInt(args[2]);
		if(len==4)
		{
			int allowance = Integer.parseInt(args[3]);
			mng.EmployeeDetails(name,id,salary);
			mng.ManagerDetails(allowance);
		}
		else
			emp.EmployeeDetails(name,id,salary);
		System.out.println();
		if(len==4)
			mng.printManagerDetails();
		else
			emp.printEmployeeDetails();
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/