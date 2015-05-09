/*                                Program No. :
Aim : WAP to represent a class for stack that can store both integer and
      floating point numbers separately using class templates and perform
      the following operations on the stack - 1. Push, 2. Pop, 3. Display.
*/
#include<iostream.h>
#include<conio.h>
# define size 5
template<class typea>
class stack
{
 int top;
 typea array[size];
 public:
 stack()
  {
   top=-1;
  }
 void push(typea);
 typea pop();
 void display() const;
};
template<class typea>
void stack<typea>::push(typea no)
{
 if(top==size-1)
  cout<<"\n\n\t\tElement can't be pushed, because stack is full";
 else
  array[++top]=no;
}
template<class typea>
typea stack<typea>::pop()
{
 if(top==-1)
  return(-9999);
 else
  return(array[top--]);
}
template<class typea>
void stack<typea>::display() const
{
 if(top==-1)
  cout<<"\n\n\t\tStack is empty, No elements to display";
 else
  {
   cout<<"\n\n\t\t"<<array[top]<<"     <- TOP";
   for(int i=top-1;i>=0;i--)
    cout<<"\n\t\t"<<array[i];
  }
}
void main()
{
 int choice1,n;
 float f;
 char choice2;
 stack<int> s1;
 stack<float> s2;
 do
  {
   clrscr();
   cout<<"\n\n\t\t\t\tMENU"<<"\n\n\t\t1. Push to Integer stack"
       <<"\n\t\t2. Pop from Integer stack"
       <<"\n\t\t3. Display Integer stack"
       <<"\n\t\t4. Push to Float Stack"
       <<"\n\t\t5. Pop from Float Stack"
       <<"\n\t\t6. Display Float Stack"
       <<"\n\t\t7. Exit";
   cout<<"\n\n\tEnter your choice (1-7) : ";
   cin>>choice1;
   switch(choice1)
    {
     case 1:do
	     {
	      cout<<"\n\t\tEnter element : ";
	      cin>>n;
	      s1.push(n);
	      cout<<"\n\tWant to enter more (y/n) : ";
	      cin>>choice2;
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:do
	     {
	      n=s1.pop();
	      if(n==-9999)
	       {
		cout<<"\n\n\t\tElement can't be poped, because stack is empty"
		    <<"\n\t\tPress any key";
		choice2='n';
		getch();
	       }
	      else
	       {
		cout<<"\n\t\tElement popped : "<<n;
		cout<<"\n\tWant to pop more (y/n) : ";
		cin>>choice2;
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:s1.display();
	    cout<<"\n\n\t\t\t\tPress any key";
	    getch();
	    break;
     case 4:do
	     {
	      cout<<"\n\t\tEnter element : ";
	      cin>>f;
	      s2.push(f);
	      cout<<"\n\tWant to enter more (y/n) : ";
	      cin>>choice2;
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 5:do
	     {
	      f=s2.pop();
	      if(f==-9999.00)
	       {
		cout<<"\n\n\t\tElement can't be poped, because stack is empty"
		    <<"\n\t\tPress any key";
		choice2='n';
		getch();
	       }
	      else
	       {
		cout<<"\n\t\tElement popped : "<<f;
		cout<<"\n\tWant to pop more (y/n) : ";
		cin>>choice2;
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 6:s2.display();
	    cout<<"\n\n\t\t\t\tPress any key";
	    getch();
	    break;
     case 7:break;
     default:cout<<"\n\n\t\t\tIncorrect Choice"
		 <<"\n\n\t\tPress any key";
	     getch();
	     break;
    }
  }while(choice1!=7);
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/