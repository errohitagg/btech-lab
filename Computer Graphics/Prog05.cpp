/*                                Program No. :
Aim : WAP for flood filling on circle as raster graphics display.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>

void flood_fill(int x,int y,int fill,int old)
{
 if(getpixel(x,y)==old)
  {
   putpixel(x,y,fill);
   flood_fill(x+1,y,fill,old);
   flood_fill(x-1,y,fill,old);
   flood_fill(x,y+1,fill,old);
   flood_fill(x,y-1,fill,old);
  }
}

void main()
{
 int cenx,ceny,radius,x,y;
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
 printf("\nEnter the center of circle, x : ");
 scanf("%d",&cenx);
 printf("\nEnter the center of circle, y : ");
 scanf("%d",&ceny);
 printf("\nEnter the radius of the circle : ");
 scanf("%d",&radius);
 clrscr();
 setcolor(0);
 circle(cenx,ceny,radius);
 getch();
 clrscr();
 printf("\nEnter the interior point, x : ");
 scanf("%d",&x);
 printf("\nEnter the interior point, y : ");
 scanf("%d",&y);
 clrscr();
 setcolor(0);
 circle(cenx,ceny,radius);
 flood_fill(x,y,4,7);
 getch();
 closegraph();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/
