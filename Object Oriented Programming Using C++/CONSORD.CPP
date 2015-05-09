/*                                Program No. :
Aim : WAP to implement the concept of single level inheritance and display
      the order of execution of constructors and destructors in base class
      and derived class.
*/

#include<iostream.h>
#include<conio.h>

class base
{
 int i;
 public:
 base(int);
 ~base();
};

class derived:public base
{
 int i;
 public:
 derived(int);
 ~derived();
};

base::base(int x)
{
 i=x;
 cout<<"\n\nContructor of base class for object "<<i<<" called.";
}
base::~base()
{
 cout<<"\n\nDestructor of base class for object "<<i<<" called.";
}
derived::~derived()
{
 cout<<"\n\nDestructor of derived class for object "<<i<<" called.";
}
/*derived::derived(int x)
{Error : Cannot find default constructor to initialize base class 'base'.
}*/
derived::derived(int x):base(x)
{
 i=x;
 cout<<"\n\nConstructor of derived class for object "<<i<<" called.";
}

void main()
{
 clrscr();
 derived ob1(1);
 derived *ob2;
 ob2=new derived(2);
  {
   derived ob3(3);
  }
 delete(ob2);
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/