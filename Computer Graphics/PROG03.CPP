/*				  Program No. :
Aim : WAP for drawing a raster graphic display of circle using mid-point
      algorithm.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

void circle(int x0,int y0,int radius,int value)
{
 int x=0,y=radius;
 double d=(5.0/4.0)-radius;
 putpixel(x0,y0+radius,value);
 putpixel(x0,y0-radius,value);
 putpixel(x0+radius,y0,value);
 putpixel(x0-radius,y0,value);
 while(y>x)
  {
   if(d<0)
    d+=(2.0*x)+3.0;
   else
    {
     d+=(2.0*(x-y))+5.0;
     y--;
    }
   x++;
   putpixel(x0+x,y0+y,value);
   putpixel(x0-x,y0+y,value);
   putpixel(x0+x,y0-y,value);
   putpixel(x0-x,y0-y,value);
   putpixel(x0+y,y0+x,value);
   putpixel(x0-y,y0+x,value);
   putpixel(x0+y,y0-x,value);
   putpixel(x0-y,y0-x,value);
  }
}

void main()
{
 clrscr();
 int x,y,radius;
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
 printf("\nEnter the center of circle, X : ");
 scanf("%d",&x);
 printf("\nEnter the center of circle, Y : ");
 scanf("%d",&y);
 printf("\nEnter the radius of the circle : ");
 scanf("%d",&radius);
 clrscr();
 circle(x,y,radius,50);
 getch();
 closegraph();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/