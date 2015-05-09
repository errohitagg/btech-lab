/*                                Program No. :
Aim : WAP for boundary filling of rectangle as raster graphics 	display.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>

void boundary_fill(int x,int y,int fill,int boundary)
{
 int current;
 current = getpixel(x,y);
 if((current!=boundary)&&(current!=fill))
  {
   putpixel(x,y,fill);
   boundary_fill(x+1,y,fill,boundary);
   boundary_fill(x-1,y,fill,boundary);
   boundary_fill(x,y+1,fill,boundary);
   boundary_fill(x,y-1,fill,boundary);
  }
}

void main()
{
 int topx,topy,botx,boty,x,y;
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
 printf("\n\nEnter the top left coordinates of rectangle : ");
 printf("\n\t\tx : ");
 scanf("%d",&topx);
 printf("\t\ty : ");
 scanf("%d",&topy);
 printf("\n\nEnter the bottom right coordinates of rectangle : ");
 printf("\n\t\tx : ");
 scanf("%d",&botx);
 printf("\t\ty : ");
 scanf("%d",&boty);
 clrscr();
 setcolor(0);
 rectangle(topx,topy,botx,boty);
 getch();
 clrscr();
 printf("\nEnter the interior point, x : ");
 scanf("%d",&x);
 printf("\nEnter the interior point, y : ");
 scanf("%d",&y);
 clrscr();
 setcolor(0);
 rectangle(topx,topy,botx,boty);
 boundary_fill(x,y,4,0);
 getch();
 closegraph();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/
