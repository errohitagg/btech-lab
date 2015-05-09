import java.rmi.*;
import java.rmi.registry.*;
import java.net.*;

public class Prog15_Server extends java.rmi.server.UnicastRemoteObject implements ReceiveMessageInterface 
{
    int thisPort;
    String thisAddress;
    Registry registry;
    
	public void receiveMessage(String x) throws RemoteException 
	{
        System.out.println(x);
    }

    public Prog15_Server() throws RemoteException 
	{
        try 
		{
            thisAddress = (InetAddress.getLocalHost()).toString();
        }
		catch (Exception e) 
		{
            throw new RemoteException("Unable to get inet address.");
        }
        
		thisPort = 3232;
        System.out.println("Address=" + thisAddress + ", Port=" + thisPort);
        
		try 
		{
            registry = LocateRegistry.createRegistry(thisPort);
            registry.rebind("rmiServer", this);
        } 
		catch (RemoteException e) 
		{
        }
    }

    static public void main(String args[]) 
	{
        try 
		{
            Prog15_Server server = new Prog15_Server();
        } 
		catch (Exception e) 
		{
        }
    }
}
