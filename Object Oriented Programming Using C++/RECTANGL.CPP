/*				  Program No. :
Aim : WAP that uses a class rectangle with variables length and breadth
      and calculates it's perimeter and area.
*/

#include<iostream.h>
#include<conio.h>

class rectangle
{
 float length,breadth;
 public:
 void setvalue(float,float);
 float perimeter();
 float area();
};

void rectangle::setvalue(float x,float y)
{
 length=x;
 breadth=y;
}

float rectangle::perimeter()
{
 return(2*(length+breadth));
}

float rectangle::area()
{
 return(length*breadth);
}

void main()
{
 clrscr();
 rectangle object;
 float length,breadth;
 cout<<"\n\n\t\tEnter the length of Rectangle (in metre) : ";
 cin>>length;
 cout<<"\n\t\tEnter the breadth of Rectangle (in metre) : ";
 cin>>breadth;
 object.setvalue(length,breadth);
 cout<<"\n\n\t\tThe Perimeter of Rectangle = "<<object.perimeter()<<" metre";
 cout<<"\n\n\t\tThe Area of Rectangle = "<<object.area()<<" metre sq.";
 getch();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/

