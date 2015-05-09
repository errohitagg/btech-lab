/*				  Program No. :

Aim : WAP that uses a class called point to model a point. Define two
      points, and have the user input values to two of them. Then display
      the value, equal to the sum of the two points.

*/

#include<iostream.h>
#include<conio.h>

class point
{
 int x;
 int y;
 public:
 void setsize(int a,int b);
 int getx();
 int gety();
 void display() const;
};
void point::setsize(int a,int b)
{
 x=a;
 y=b;
}
int point::getx()
{
 return x;
}
int point::gety()
{
 return y;
}
void point::display() const
{
 cout<<"\n\n\t\tCo-ordinates of P1 + P2 are : ("<<x<<", "<<y<<")";
}
void main()
{
 clrscr();
 int x,y;
 point p1,p2,p3;
 cout<<"\n\n\t\tEnter the co-ordinates for Point P1, X : ";
 cin>>x;
 cout<<"\t\t\t\t\t\t     Y : ";
 cin>>y;
 p1.setsize(x,y);
 cout<<"\n\t\tEnter the co-ordinates for Point P2, X : ";
 cin>>x;
 cout<<"\t\t\t\t\t\t     Y : ";
 cin>>y;
 p2.setsize(x,y);
 p3.setsize((p1.getx()+p2.getx()),(p1.gety()+p2.gety()));
 p3.display();
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/