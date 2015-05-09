/*				  Program No. :
Aim : WAP to declare a class power and raise a number n to a power p. The
      function takes a double value for n and an int value for p, and
      returns the result as double value. Use a default argument of 2 for p.
*/
#include<iostream.h>
#include<conio.h>
class power
{
 double number;
 int power;
 public:
 void setvalue(double,int = 2);
 double pow();
};
void power::setvalue(double no,int pow)
{
 number=no;
 power=pow;
}
double power::pow()
{
 double ans=1;
 for(int i=0;i<power;i++)
  ans*=number;
 return(ans);
}
void main()
{
 clrscr();
 power ob1,ob2;
 int pow;
 double no;
 cout<<"\n\n\t\tEnter the number : ";
 cin>>no;
 cout<<"\n\t\tEnter the power : ";
 cin>>pow;
 ob1.setvalue(no);
 ob2.setvalue(no,pow);
 cout<<"\n\n\t\tNumber "<<no<<" to the power 2 is : "<<ob1.pow()
     <<"\n\n\n\t\tNumber "<<no<<" to the power "<<pow<<" is : "
     <<ob2.pow();
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/