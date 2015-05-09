/*                                Program No. :
Aim : WAP to create a class Toll Booth with two data items, one to store the
      no. of cars and other to store the money collected and three member
      functions, paycar(), nopaycar() and display().
*/
#include<iostream.h>
#include<conio.h>
class toll_booth
{
 unsigned int cars;
 double money;
 public:
 toll_booth()
  {
   cars=0;
   money=0.0;
  }
 void paycar()
  {
   cars++;
   money+=0.50;
  }
 void nopaycar()
  {
   cars++;
  }
 void display()
  {
   cout<<"\n\n\t\tTotal No. of cars = "<<cars
       <<"\n\t\tTotal money collected = "<<money;
  }
};
void main()
{
 toll_booth ob;
 int choice;
 do
  {
   clrscr();
   cout<<"\n\n\t\t\tMenu\n\n\t1. Add to Paying Car"
       <<"\n\t2. Add to no Paying Car\n\t3. Display Details"
       <<"\n\t4. Exit";
   cout<<"\n\n\t\tEnter your choice (1-4) : ";
   cin>>choice;
   switch(choice)
    {
     case 1:ob.paycar();
	    break;
     case 2:ob.nopaycar();
	    break;
     case 3:ob.display();
	    cout<<"\n\n\t\tPress any key to continue";
	    getch();
	    break;
     case 4:break;
    }
  }while(choice<4);
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/