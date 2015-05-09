/*				  Program No. :

Aim : WAP that uses a class to store three parts of a phone number (Area Code,
      Exchange Number, Phone Number) separately. Create two variables of type
      phone number. Initialize one, and have the user input for the other one
      and display both the numbers.

*/

#include<iostream.h>
#include<conio.h>

class phone
{
 int area_code,exchange_no,phone_no;
 public:
 phone(int,int,int);
 void display();
};

phone::phone(int x,int y,int z)
{
 area_code=x;
 exchange_no=y;
 phone_no=z;
}

void phone::display()
{
 cout<<"("<<area_code<<") "<<exchange_no<<"-"<<phone_no;
}

void main()
{
 clrscr();
 int x,y,z;
 cout<<"\n\n\t\tEnter the area code : ";
 cin>>x;
 cout<<"\n\t\tEnter the exchange number : ";
 cin>>y;
 cout<<"\n\t\tEnter the phone number : ";
 cin>>z;
 phone ph1(212,767,8900);
 phone ph2(x,y,z);
 cout<<"\n\n\t\tMy number is : ";
 ph1.display();
 cout<<"\n\n\t\tYour number is : ";
 ph2.display();
 getch();
}

/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/