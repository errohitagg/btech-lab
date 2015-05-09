/*                                Program No. :
Aim : WAP to calculate the absolute value of any integer or floating point
      number through a single function using function template.
*/
#include<iostream.h>
#include<conio.h>
template <class typea>
typea abs(typea n)
{
 return((n<0)?-n:n);
}
void main()
{
 int n,choice1;
 float f;
 char choice2;
 do
  {
   clrscr();
   cout<<"\n\n\t\t\t\tMENU"
       <<"\n\n\t1. Absolute value of Integer"
       <<"\n\t2. Absolute value of Float"
       <<"\n\t3. Exit";
   cout<<"\n\n\tEnter your choice (1-3) : ";
   cin>>choice1;
   switch(choice1)
    {
     case 1:cout<<"\n\n\t\tEnter the number : ";
	    cin>>n;
	    cout<<"\n\t\tAbsolute value of "<<n<<" = "<<abs(n);
	    cout<<"\n\n\tWant to continue (y/n) : ";
	    cin>>choice2;
	    break;
     case 2:cout<<"\n\n\t\tEnter the number : ";
	    cin>>f;
	    cout<<"\n\t\tAbsolute value of "<<f<<" = "<<abs(f);
	    cout<<"\n\n\tWant to continue (y/n) : ";
	    cin>>choice2;
	    break;
     case 3:break;
     default:cout<<"\n\n\t\tIncorrect Choice"
		 <<"\n\t\tPress any key to continue";
	     choice2='y';
    }
  }while(choice2=='y'||choice2=='Y');
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/