/*				  Program No. :
Aim : WAP to create a class calculator that has two numbers and an operator
      as it's member variables. It then carries out the specified arithmetic
      operation and displays the relevant output.
*/
#include<iostream.h>
#include<conio.h>
class calculator
{
 float no1,no2;
 char op;
 public:
 calculator(float,float,char);
 float operation();
};
calculator::calculator(float x,float y,char z)
{
 no1=x;
 no2=y;
 op=z;
}
float calculator::operation()
{
 switch(op)
  {
   case '+':return(no1+no2);
   case '-':return(no1-no2);
   case '*':return(no1*no2);
   case '/':if(no2==0)
	     return(-9999);
	    else
	     return(no1/no2);
  }
}
void main()
{
 float no1,no2;
 char op,choice;
 do
  {
   clrscr();
   cout<<"\n\n\t\tEnter the first number : ";
   cin>>no1;
   cout<<"\t\tEnter the second number : ";
   cin>>no2;
   cout<<"\t\tEnter the operator (+,-,*,/) : ";
   cin>>op;
   calculator ob1(no1,no2,op);
   if(ob1.operation()==-9999)
    cout<<"\n\n\t\tDivisor can't be zero.\n\t\tDivision can't be performed.";
   else
    cout<<"\n\n\t\tAnswer = "<<ob1.operation();
   cout<<"\n\n\n\t\tWant to continue (y/n) : ";
   cin>>choice;
  }while(choice=='y'||choice=='Y');
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/