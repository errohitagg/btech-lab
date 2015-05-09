/*					Program No. :-
Aim :- WAP to display an Applet.
*/

import java.awt.*;
import java.applet.*;

/*
	<applet code="Prog07" width=250 height=100>
	</applet>
*/

public class Prog07 extends Applet
{
	public void init()
	{
	}
	
	public void paint (Graphics g)
	{
		g.drawString("This is shown in the applet window.", 25, 25);
		showStatus("This is shown in the status window");
	}
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/
