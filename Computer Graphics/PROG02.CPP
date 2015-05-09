/*                                Program No. :
Aim : WAP for 2D line drawing as raster graphics display using Bresenhem line
      drawing algorithm.
*/

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void line(int x0,int y0,int x1,int y1,int value)
{
 int dy=y1-y0,dx=x1-x0,d=(2*dy)-dx,incre=2*dy,incrne=2*(dy-dx);
 int x=x0,y=y0;
 putpixel(x,y,value);
 while(x<x1)
  {
   if(d<=0)
    {
     d+=incre;
     x++;
    }
   else
    {
     d+=incrne;
     x++;
     y++;
    }
   putpixel(x,y,value);
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
