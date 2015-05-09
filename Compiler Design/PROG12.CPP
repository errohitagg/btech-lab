/*                                Program No.:
Aim: WAP to show the implementation of stack and its operations, ie Push,
     Pop, and Display using arrays.
*/

#include<stdio.h>
#include<conio.h>
#define MAX 5

int stack[MAX], top=0;

void push(int value)
{
 if(top == MAX)
  printf("\t\tStack is full. No value can be pushed in the stack.\n");
 else
  stack[top++]=value;
}

int pop()
{
 int return_value=0;
 if(top == 0)
  printf("\n\t\tStack is empty. No value can be popped from the stack.\n");
 else
  return_value=stack[--top];
 return(return_value);
}

void display()
{
 int i;
 printf("{");
 for(i=0; i<top; i++)
  printf("%d,",stack[i]);
 printf("}");
}

void main()
{
 int choice, value;
 char option;

 do
 {
  clrscr();
  printf("\n\n\t\tStack Implementation");
  printf("\n\t\t--------------------");
  printf("\n\n\t1. Push into Stack");
  printf("\n\t2. Pop from Stack");
  printf("\n\t3. Display Stack");
  printf("\n\t4. Exit");
  printf("\n\n\t\tEnter your choice (1-4): ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	do
	{
	 printf("\n\t\tEnter the value to be pushed: ");
	 scanf("%d",&value);
	 push(value);
	 printf("\t\tWant to enter more (y/n): ");
	 scanf("%s",&option);
	}while(option=='y'||option=='Y');
	break;
   case 2:
	do
	{
	 printf("\n\t\tPress any key to pop a value.");
	 getch();
	 value=pop();
	 if(value!=0)
	  printf("\n\t\tValue popped is: %d\n", value);
	 printf("\t\tWant to pop more (y/n): ");
	 scanf("%s",&option);
	}while(option=='y'||option=='Y');
	break;
   case 3:
	printf("\n\t\tStack formed is:\n\n\t\t");
	display();
	printf("\n\n\t\t\tPress any key to continue.");
	getch();
	break;
   case 4:
	printf("\n\n\n\t\t\tPress any key to exit the program.");
	break;
   default:
	printf("\n\n\n\t\t\tInvalid choice. Please Try again");
	printf("\n\t\t\tPress any key to continue.");
	getch();
	break;
  }
 }while(choice!=4);
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/