/*                                Program No. :
Aim : WAP for zooming an object.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
 int right=200,top=50,left=50,bottom=200,midx,midy;
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "C:\\TC3.0\\BGI");
 errorcode = graphresult();
 clrscr();
 if (errorcode != grOk)
  {
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to exit.");
   getch();
   exit(1);
  }
 while(right<=400&&bottom<=400)
  {
   midx=(left+right)/2;
   midy=(top+bottom)/2;
   circle(midx,midy,(bottom-top)/2);
   setfillstyle(1,BLACK);
   floodfill(midx,midy,BLACK);
   delay(10);
   right+=1;
   bottom+=1;
  }
 getch();
 closegraph();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/