/*                                PROGRAM NO. - 06

Aim :- WAP to represent a scroll, which is an input restricted dequeue
       and perform the following operations on the scroll -
       1. Insertion at rear end of the scroll
       2. Deletion at both front and rear ends of the scroll
       3. Display the scroll.

*/

#include<stdio.h>
#include<conio.h>
# define size 50

struct scroll
{
 int front,rear,count;
 int array[size];
};

void insert(int,struct scroll *);
int del_front(struct scroll *);
int del_rear(struct scroll *);
void print(struct scroll *);

void insert(int no,struct scroll *ref)
{
 ref->rear=(ref->rear+1)%size;
 ref->array[ref->rear]=no;
 ref->count++;
}

int del_front(struct scroll *ref)
{
 int a;
 a=ref->array[ref->front];
 ref->front=(ref->front+1)%size;
 ref->count--;
 return(a);
}

int del_rear(struct scroll *ref)
{
 int a;
 a=ref->array[ref->rear];
 if(ref->rear==0)
  ref->rear=size-1;
 else
  ref->rear--;
 ref->count--;
 return(a);
}

void print(struct scroll *ref)
{
 int i;
 printf("\n\n\t\t%d",ref->array[ref->front]);
 printf("     <- FRONT");
 if(ref->rear<ref->front)
  {
   if(((ref->front+1)%size)==0)
    {
     for(i=0;i<=ref->rear;i++)
      printf("\n\t\t%d",ref->array[i]);
    }
   else
    {
     for(i=((ref->front+1)%size);i<size;i++)
      printf("\n\t\t%d",ref->array[i]);
     for(i=0;i<=ref->rear;i++)
      printf("\n\t\t%d",ref->array[i]);
    }
  }
 else if(ref->rear>ref->front)
  {
   for(i=((ref->front+1)%size);i<=ref->rear;i++)
    printf("\n\t\t%d",ref->array[i]);
  }
 printf("     <- REAR");
}

void main()
{
 int choice1,ele;
 char choice2;
 struct scroll org;
 org.front=0;
 org.rear=size-1;
 org.count=0;
 do
  {
   clrscr();
   printf("\n\n\t1. Insert to scroll");
   printf("\n\t2. Delete from front of scroll");
   printf("\n\t3. Delete from rear of scroll");
   printf("\n\t4. Display scroll");
   printf("\n\t5. Exit");
   printf("\n\n\tEnter choice (1-5) : ");
   scanf("%d",&choice1);
   switch(choice1)
    {
     case 1:clrscr();
	    do
	     {
	      if(org.count==size)
	       {
		printf("\n\n\t\t\tOverflow Error");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		printf("\n\t\tEnter element to scroll : ");
		scanf("%d",&ele);
		insert(ele,&org);
		printf("\n\tWant to enter more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:clrscr();
	    do
	     {
	      if(org.count==0)
	       {
		printf("\n\n\t\t\tUnderflow Error");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		ele=del_front(&org);
		printf("\n\t\tElement popped from front : %d",ele);
		printf("\n\tWant to pop more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:clrscr();
	    do
	     {
	      if(org.count==0)
	       {
		printf("\n\n\t\t\tUnderflow Error");
		printf("\n\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		ele=del_rear(&org);
		printf("\n\t\tElement popped from rear : %d",ele);
		printf("\n\tWant to pop more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 4:clrscr();
	    if(org.count==0)
	     {
	      printf("\n\n\t\t\tScroll is empty");
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
     case 5:break;
     default:printf("\n\n\t\t\tIncorrect Choice");
	     printf("\n\n\t\tPress any key");
	     getch();
	     break;
    }
  }while(choice1!=5);
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/