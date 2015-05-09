/*                                Program No. :
Aim : WAP for creating a screen saver using in-built functions of graphics.
*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
 int i,j;
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
 i=0;
 j=0;
 while(i<=200)
  {
   cleardevice();
   setcolor(j);
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
   outtextxy((j%400),(i%320),"WELCOME TO");
   outtextxy((j%400)+20,(i%320)+40,"COMPUTER");
   outtextxy((j%400)+20,(i%320)+80,"GRAPHICS");
   delay(10);
   i++;
   j+=5;
  }
 getch();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/