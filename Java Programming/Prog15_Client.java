import java.rmi.*;
import java.rmi.registry.*;
import java.net.*;

public class Prog15_Client
{
    static public void main(String args[])
    {
       ReceiveMessageInterface server;
       Registry registry;
       String serverAddress = args[0];
       String serverPort = args[1];
       String text = args[2];
       
	   System.out.println("sending " + text + " to " + serverAddress + ": " + serverPort);       
	   try
	   {
           registry = LocateRegistry.getRegistry(serverAddress , (new Integer(serverPort)).intValue());
           server = (ReceiveMessageInterface)(registry.lookup("rmiServer"));
           server.receiveMessage(text);
       }
       catch(RemoteException e)
	   {
       }
       catch(NotBoundException e)
	   {
       }
    }
}
