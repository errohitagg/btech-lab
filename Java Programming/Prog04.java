/*					Program No. :-
Aim :- WAP to demonstrate the concept of Multi-Threading.
*/

class newThread extends Thread
{	
	static int count;
	int threadNo;
	
	newThread() 
	{		
		count++;
		this.threadNo  = count;
	}
	
	public void run() 
	{
		try 
		{
			for(int i = 5; i > 0; i--) 
			{
				System.out.println("Child Thread " + threadNo + " executing.");
				Thread.sleep(500);
			}
		}
		catch (InterruptedException e) 
		{
			System.out.println("Child Thread " + threadNo + " interrupted.");
		}
		System.out.println("Exiting child thread " + threadNo + ".");
	}
}

public class Prog04
{
	public static void main(String args[]) 
	{
		newThread thread01 = new newThread();
		thread01.start();
		newThread thread02 = new newThread();
		thread02.start();
	}
}

/*
Name - Rohit Aggarwal
RollNo. - 7CS-097
*/