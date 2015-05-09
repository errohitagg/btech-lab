/*                                PROGRAM NO. - 03

Aim :- WAP to represent two stacks using array implementation and perform
       the following operations on both the stacks - 1. Push, 2. Pop,
       3. Display, while using memory efficiently.

*/

#include<stdio.h>
#include<conio.h>
# define size 50

int array[size],top1=-1,top2=size;

void push1(int);
void push2(int);
int pop1();
int pop2();
void print1();
void print2();

void push1(int no)
{
 top1++;
 array[top1]=no;
}

void push2(int no)
{
 top2--;
 array[top2]=no;
}

int pop1()
{
 int a;
 a=array[top1];
 top1--;
 return(a);
}

int pop2()
{
 int a;
 a=array[top2];
 top2++;
 return(a);
}

void print1()
{
 int i;
 printf("\n\n\t\t%d",array[top1]);
 printf("     <- TOP");
 for(i=top1-1;i>=0;i--)
  printf("\n\t\t%d",array[i]);
}

void print2()
{
 int i;
 printf("\n\n\t\t%d",array[top2]);
 printf("     <- TOP");
 for(i=top2+1;i<size;i++)
  printf("\n\t\t%d",array[i]);
}

void main()
{
 int choice1,ele;
 char choice2;
 do
  {
   clrscr();
   printf("\n\n\t1. Push to stack1");
   printf("\n\t2. Push to stack2");
   printf("\n\t3. Pop from stack1");
   printf("\n\t4. Pop from stack2");
   printf("\n\t5. Display stacks");
   printf("\n\t6. Exit");
   printf("\n\n\tEnter choice (1-6) : ");
   scanf("%d",&choice1);
   switch(choice1)
    {
     case 1:clrscr();
	    do
	     {
	      if(top2-top1==1)
	       {
		printf("\n\n\t\t\tOverflow Error");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		printf("\n\t\tEnter element in stack1 : ");
		scanf("%d",&ele);
		push1(ele);
		printf("\n\tWant to enter more in stack1 (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:clrscr();
	    do
	     {
	      if(top2-top1==1)
	       {
		printf("\n\n\t\t\tOverflow Error");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		printf("\n\t\tEnter element in stack2 : ");
		scanf("%d",&ele);
		push2(ele);
		printf("\n\tWant to enter more in stack2 (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:clrscr();
	    do
	     {
	      if(top1==-1)
	       {
		printf("\n\n\t\t\tUnderflow Error in Stack1");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		ele=pop1();
		printf("\n\t\tElement popped from stack1 : %d",ele);
		printf("\n\tWant to pop more from stack1 (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 4:clrscr();
	    do
	     {
	      if(top2==size)
	       {
		printf("\n\n\t\t\tUnderflow Error in Stack2");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		ele=pop2();
		printf("\n\t\tElement popped from stack2 : %d",ele);
		printf("\n\tWant to pop more from stack2 (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 5:clrscr();
	    if(top1==-1)
	     {
	      if(top2==size)
	       {
		printf("\n\n\t\t\tStack1 and Stack2 are empty");
		printf("\n\n\t\tPress any key");
		getch();
	       }
	      else
	       {
		printf("\n\n\t\t\tStack1 is empty");
		printf("\n\n\n\t\t\tStack2");
		print2();
		printf("\n\n\t\tPress any key");
		getch();
	       }
	     }
	    else
	     {
	      if(top2==size)
	       {
		printf("\n\n\t\t\tStack2 is empty");
		printf("\n\n\n\t\t\tStack1");
		print1();
		printf("\n\n\t\tPress any key");
		getch();
	       }
	      else
	       {
		printf("\n\n\n\t\t\tStack1");
		print1();
		printf("\n\n\t\t\tStack2");
		print2();
		printf("\n\n\t\tPress any key");
		getch();
	       }
	     }
	    break;
     case 6:break;
     default:printf("\n\n\t\t\tIncorrect Choice");
	     printf("\n\n\t\tPress any key");
	     getch();
	     break;
    }
  }while(choice1!=6);
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/