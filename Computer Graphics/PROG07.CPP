/*   		                  Program No. :
Aim : WAP for line clipping.
*/

#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>

void main()
{
 int xmax,ymax,xmin,ymin,lx1,ly1,lx2,ly2,a[4],b[4],c[4],x1,y1,i;
 float m;
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
 printf("\nEnter the starting point of Viewport, x : ");
 scanf("%d",&xmin);
 printf("\nEnter the starting point of Viewport, y : ");
 scanf("%d",&ymin);
 printf("\nEnter the ending point of Viewport, x : ");
 scanf("%d",&xmax);
 printf("\nEnter the ending point of Viewport, y : ");
 scanf("%d",&ymax);
 printf("\nEnter the starting point of line, x :");
 scanf("%d",&lx1);
 printf("\nEnter the starting point of line, y :");
 scanf("%d",&ly1);
 printf("\nEnter the ending point of line, x :");
 scanf("%d",&lx2);
 printf("\nEnter the ending point of line, y :");
 scanf("%d",&ly2);
 for(i=0;i<4;i++)
  {
   a[i]=0;
   b[i]=0;
  }
 clrscr();
 rectangle(xmin,ymin,xmax,ymax);
 line(lx1,ly1,lx2,ly2);
 getch();
 clrscr();
 m=(ly2-ly1)/(lx2-lx1);
 if(lx1<xmin)
  a[3]=1;
 if(lx1>xmax)
  a[2]=1;
 if(ly1<ymin)
  a[1]=1;
 if(ly1>ymax)
  a[0]=1;
 if(lx2<xmin)
  b[3]=1;
 if(lx2>xmax)
  b[2]=1;
 if(ly2<ymin)
  b[1]=1;
 if(ly2>ymax)
  b[0]=1;
 printf("\n\tRegion Code of 1st point :\n");
 for(i=0;i<4;i++)
  printf("\t%d",a[i]);
 printf("\n\n\tRegion Code of 2nd point :\n");
 for(i=0;i<4;i++)
  printf("\t%d",b[i]);
 printf("\n\n\tAnding of the two region points :\n");
 for(i=0;i<4;i++)
  {
   c[i]=a[i]&&b[i];
   printf("\t%d",c[i]);
  }
 if((c[0]==0)&&(c[1]==0)&&(c[2]==0)&&(c[3]==0))
  {
   if((a[0]==0)&&(a[1]==0)&&(a[2]==0)&&(a[3]==0)&&
      (b[0]==0)&&(b[1]==0)&&(b[2]==0)&&(b[3]==0))
    {
     printf("\n\n\n\t\tThe Line is Completely Visible.");
     printf("\n\t\tIt has no need to be Clipped.");
     getch();
     clrscr();
     rectangle(xmin,ymin,xmax,ymax);
     line(lx1,ly1,lx2,ly2);
     getch();
    }
   else
    {
     printf("\n\n\n\t\tThe Line is Partially Visible.");
     printf("\n\t\tIt needs to be Clipped.");
     getch();
     clrscr();
     if((a[0]==0)&&(a[1]==1))
      {
       x1=lx1+(ymin-ly1)/m;
       lx1=x1;
       ly1=ymin;
      }
     else if((b[0]==0)&&(b[1]==1))
      {
       x1=lx2+(ymin-ly2)/m;
       lx2=x1;
       ly2=ymin;
      }
     if((a[0]==1)&&(a[1]==0))
      {
       x1=lx1+(ymax-ly1)/m;
       lx1=x1;
       ly1=ymax;
      }
     else if((b[0]==1)&&(b[1]==0))
      {
       x1=lx2+(ymax-ly2)/m;
       lx2=x1;
       ly2=ymax;
      }
     if((a[2]==0)&&(a[3]==1))
      {
       y1=ly1+m*(xmin-lx1);
       ly1=y1;
       lx1=xmin;
      }
     else if((b[2]==0)&&(b[3]==1))
      {
       y1=ly2+m*(xmin-lx2);
       ly2=y1;
       lx2=xmin;
      }
     if((a[2]==1)&&(a[3]==0))
      {
       y1=ly1+m*(xmax-lx1);
       ly1=y1;
       lx1=xmax;
      }
     else if((b[2]==1)&&(b[3]==0))
      {
       y1=ly2+m*(xmax-lx2);
       ly2=y1;
       lx2=xmax;
      }
     rectangle(xmin,ymin,xmax,ymax);
     line(lx1,ly1,lx2,ly2);
     getch();
    }
  }
 else
  {
   printf("\n\n\n\t\tThe Line is Completely Invisible.");
   getch();
   clrscr();
   rectangle(xmin,ymin,xmax,ymax);
   getch();
  }
 closegraph();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/