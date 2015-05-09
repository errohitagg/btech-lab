/*                                Program No. :
Aim : WAP to show the concept of function overloading in virtual functions
      using a shape class (abstract) and deriving the class in rectangle,
      square and triangle classes and using the overloaded virtual function.
*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
class shape
{
 public:
 float a,b,c;
 virtual float area(float)=0;
 virtual float area(float,float)=0;
 virtual float area(float,float,float)=0;
 virtual void display()=0;
};
class square:public shape
{
 public:
 square(float x)
  {
   a=x;
  }
 float area(float x)
  {
   return(x*x);
  }
 void display()
  {
   cout<<"\n\tArea of square is "<<area(a)<<" sq. m";
  }
 float area(float,float)
  {
   return(0);
  }
 float area(float,float,float)
  {
   return(0);
  }
};
class rectangle:public shape
{
 public:
 rectangle(float x,float y)
  {
   a=x;
   b=y;
  }
 float area(float x,float y)
  {
   return(x*y);
  }
 void display()
  {
   cout<<"\n\tArea of rectangle is "<<area(a,b)<<" sq. m";
  }
 float area(float)
  {
   return(0);
  }
 float area(float,float,float)
  {
   return(0);
  }
};
class triangle:public shape
{
 public:
 triangle(float x,float y,float z)
  {
   a=x;
   b=y;
   c=z;
  }
 float area(float x,float y,float z)
  {
   float temp;
   temp=(x+y+z)/2;
   return(sqrt(temp*(temp-x)*(temp-y)*(temp-z)));
  }
 void display()
  {
   cout<<"\n\tArea of the triangle is : "<<area(a,b,c)<<" sq. m";
  }
 float area(float)
  {
   return(0);
  }
 float area(float,float)
  {
   return(0);
  }
};
void main()
{
 int choice1;
 float a,b,c;
 char choice2;
 do
  {
   clrscr();
   cout<<"\n\n\n\t\t\tMENU"
       <<"\n\n\t1. Area of square"
       <<"\n\n\t2. Area of rectangle"
       <<"\n\n\t3. Area of triangle"
       <<"\n\n\t4. Exit";
   cout<<"\n\n\t\tEnter your choice (1-4) : ";
   cin>>choice1;
   switch(choice1)
    {
     case 1:cout<<"\n\n\n\tEnter the side of square (in m) : ";
	    cin>>a;
	    square sq(a);
	    sq.display();
	    break;
     case 2:cout<<"\n\n\n\tEnter the length of rectangle (in m) : ";
	    cin>>a;
	    cout<<"\n\tEnter the breadth of rectangle (in m) : ";
	    cin>>b;
	    rectangle rec(a,b);
	    rec.display();
	    break;
     case 3:cout<<"\n\n\n\tEnter the side 1 of the triangle (in m) : ";
	    cin>>a;
	    cout<<"\n\tEnter the side 2 of the triangle (in m) : ";
	    cin>>b;
	    cout<<"\n\tEnter the side 3 of the triangle (in m) : ";
	    cin>>c;
	    triangle tri(a,b,c);
	    tri.display();
	    break;
     case 4:exit(0);
     default:cout<<"\n\n\n\tInvalid Choice";
    }
   cout<<"\n\n\tWant to continue (y/n) : ";
   cin>>choice2;
  }while(choice2=='y'||choice2=='Y');
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/