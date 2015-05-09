/*                                Program No. :
Aim : WAP to implement multiple inheritance and discuss the accessibility of
      public, protected and private members of base class in public,
      protected and private inheritance, within derived class and through
      the objects of derived class.
*/
#include<iostream.h>
#include<conio.h>
class base
{
 int a;
 protected:
 int b;
 public:
 int c;
 base();
};
class derived1:public base
{
 int a1;
 protected:
 int b1;
 public:
 int c1;
 derived1();
};
class derived2:protected base
{
 int a2;
 protected:
 int b2;
 public:
 int c2;
 derived2();
};
class derived3:private base
{
 int a3;
 protected:
 int b3;
 public:
 int c3;
 derived3();
};
base::base()
{
 a=1;
 b=2;
 c=3;
}
derived1::derived1()
{
 //a1=a+1; Error : base::a is not accessible (base::a is private)
 b1=b+1;
 c1=c+1;
}
derived2::derived2()
{
 //a2=a+2; Error : base::a is not accessible (base::a is private)
 b2=b+2;
 c2=c+2;
}
derived3::derived3()
{
 //a3=a+3; Error : base::a is not accessible (base::a is private)
 b3=b+3;
 c3=c+3;
}
void main()
{
 clrscr();
 base ob;
 derived1 ob1;
 derived2 ob2;
 derived3 ob3;
 //cout<<ob.a;   Error : base::a is not accessible (Private Member)
 //cout<<ob.b;   Error : base::b is not accessible (Protected Member)
 cout<<"\n\nbase_object::base_member = "<<ob.c;
 //cout<<ob1.a;  Error : base::a is not accessible (Public Inheritance)
 //cout<<ob1.b;  Error : base::b is not accessible (Public Inheritance)
 cout<<"\n\nderived_object::base_member = "<<ob1.c;
 //cout<<ob1.a1; Error : derived1::a1 is not accessible (Private Member)
 //cout<<ob1.b1; Error : derived1::b1 is not accessible (Protected Member)
 cout<<"\n\nderived_object::derived_member = "<<ob1.c1;
 //cout<<ob2.a;  Error : base::a is not accessible (Protected Inheritance)
 //cout<<ob2.b;  Error : base::b is not accessible (Protected Inheritance)
 //cout<<ob2.c;  Error : base::c is not accessible (Protected Inheritance)
 //cout<<ob2.a2; Error : derived2::a2 is not accessible (Private Member)
 //cout<<ob2.b2; Error : derived2::b2 is not accessible (Protected Member)
 cout<<"\n\nderived_object::derived_member = "<<ob2.c2;
 //cout<<ob3.a;  Error : base::a is not accessible (Private Inheritance)
 //cout<<ob3.b;  Error : base::b is not accessible (Private Inheritance)
 //cout<<ob3.c;  Error : base::c is not accessible (Private Inheritance)
 //cout<<ob3.a3; Error : derived3::a3 is not accessible (Private Member)
 //cout<<ob3.b3; Error : derived3::b3 is not accessible (Protected Member)
 cout<<"\n\nderived_object::derived_member = "<<ob3.c3;
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/