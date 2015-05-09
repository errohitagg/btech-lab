/*					Program No. :
Aim : WAP to implement Threading.
*/

class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<5;i++)
		{
			System.out.println("This is myThread");
			try
			{
				Thread.sleep(1000);
			}
			catch(Exception e)
			{
				System.out.println(e);
			}
		}				
	}	
}

public class Program16
{
	public static void main(String... args)
	{
		System.out.println();
		MyThread thread = new MyThread();
		thread.start();
		for(int i=0;i<5;i++)
		{
			System.out.println("This is main thread");
			try
			{
				Thread.sleep(500);
			}
			catch(InterruptedException e)
			{
				System.out.println(e);
			}
		}
	}
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/