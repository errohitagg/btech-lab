/*                                Program No. :
Aim : WAP to declare a class Employee with name and salary, inherit Employee
      into class Manager with another variable department, inherit Manager
      into another class Executive and implement these classes for taking
      details and displaying them.
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee
{
 public:
 int salary;
 char name[50];
};
class manager:protected employee
{
 public:
 char department[25];
 manager()
  {
   cout<<"\n\n\t\tEnter the following details";
   cout<<"\n\n\tName : ";
   gets(name);
   cout<<"\tDepartment : ";
   gets(department);
   cout<<"\tSalary : ";
   cin>>salary;
  }
 void display()
  {
   cout<<"\n\t\t\tManager"<<"\n\tName : "<<name<<"\n\tDepartment : "
       <<department<<"\n\tSalary : "<<salary;
  }
};
class executive:private manager
{
 public:
 void display()
  {
   cout<<"\n\t\t\tExecutive"<<"\n\tName : "<<name<<"\n\tDepartment : "
       <<department<<"\n\tSalary : "<<salary;
  }
};
void main()
{
 int choice;
 do
  {
   clrscr();
   cout<<"\n\n\t\t\t\tMenu\n\n\t1. Manager\n\t2. Executive\n\t3. Exit";
   cout<<"\n\n\t\tEnter your choice (1-3) : ";
   cin>>choice;
   switch(choice)
    {
     case 1:manager ob1;
	    ob1.display();
	    cout<<"\n\n\t\t\tPress any key to continue";
	    getch();
	    break;
     case 2:executive ob2;
	    ob2.display();
	    cout<<"\n\n\t\t\tPress any key to continue";
	    getch();
	    break;
     case 3:break;
     default:cout<<"\n\n\t\tIncorrect choice\n\t\tPress any key";
	     getch();
    }
  }while(choice!=3);
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/