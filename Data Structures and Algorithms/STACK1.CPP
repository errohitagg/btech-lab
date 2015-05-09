/*                                PROGRAM NO. - 02

Aim :- WAP to represent array implementation of a stack and perform the
       following operations on the stack - 1. Push, 2. Pop, 3. Display.

*/

#include<stdio.h>
#include<conio.h>
# define size 50

struct stack
{
 int top;
 int array[size];
};

void push(int,struct stack *);
int pop(struct stack *);
void print(struct stack *);

void push(int no,struct stack *ref)
{
 ref->top++;
 ref->array[ref->top]=no;
}

int pop(struct stack *ref)
{
 int a;
 a=ref->array[ref->top];
 ref->top--;
 return(a);
}

void print(struct stack *ref)
{
 int i;
 printf("\n\n\t\t%d",ref->array[ref->top]);
 printf("     <- TOP");
 for(i=ref->top-1;i>=0;i--)
  printf("\n\t\t%d",ref->array[i]);
}

void main()
{
 int choice1,ele;
 char choice2;
 struct stack org;
 org.top=-1;
 do
  {
   clrscr();
   printf("\n\n\t1. Push to stack");
   printf("\n\t2. Pop from stack");
   printf("\n\t3. Display stack");
   printf("\n\t4. Exit");
   printf("\n\n\tEnter choice (1-4) : ");
   scanf("%d",&choice1);
   switch(choice1)
    {
     case 1:clrscr();
	    do
	     {
	      if(org.top==size-1)
	       {
		printf("\n\n\t\t\tOverflow Error");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		printf("\n\t\tEnter element : ");
		scanf("%d",&ele);
		push(ele,&org);
		printf("\n\tWant to enter more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:clrscr();
	    do
	     {
	      if(org.top==-1)
	       {
		printf("\n\n\t\t\tUnderflow Error");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		ele=pop(&org);
		printf("\n\t\tElement popped : %d",ele);
		printf("\n\tWant to pop more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:clrscr();
	    if(org.top==-1)
	     {
	      printf("\n\n\t\t\tStack is empty");
	      printf("\n\n\t\tPress any key");
	      getch();
	     }
	    else
	     {
	      print(&org);
	      printf("\n\n\t\t\t\tPress any key");
	      getch();
	     }
	    break;
     case 4:break;
     default:printf("\n\n\t\t\tIncorrect Choice");
	     printf("\n\n\t\tPress any key");
	     getch();
	     break;
    }
  }while(choice1!=4);
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/