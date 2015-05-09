/*                                Program No. :
Aim : WAP for 2D line drawing as raster graphics display using DDA line
      drawing algorithm.
*/

#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>

void line(int x0,int y0,int x1,int y1,int value)
{
 int x,dy=y1-y0,dx=x1-x0,m=dy/dx,y=y0;
 for(x=x0;x<=x1;x++)
  {
   putpixel(x,abs(y),value);
   y+=m;
  }
}

void main()
{
 clrscr();
 int x0,x1,y0,y1;
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
 errorcode = graphresult();
 if (errorcode != grOk)
  {
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to exit.");
   getch();
   exit(1);
  }
 printf("\nEnter the starting point, x : ");
 scanf("%d",&x0);
 printf("\nEnter the starting point, y : ");
 scanf("%d",&y0);
 printf("\nEnter the ending point, x : ");
 scanf("%d",&x1);
 printf("\nEnter the ending point, y : ");
 scanf("%d",&y1);
 clrscr();
 line(x0,y0,x1,y1,100);
 getch();
 closegraph();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/