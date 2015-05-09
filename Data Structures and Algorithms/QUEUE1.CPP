/*                                PROGRAM NO. - 04

Aim :- WAP to represent array implementation of a queue and perform the
       following operations on the queue - 1. Insertion, 2. Deletion,
       3. Display.

*/

#include<stdio.h>
#include<conio.h>
# define size 50

struct queue
{
 int front,rear,count;
 int array[size];
};

void insert(int,struct queue *);
int del(struct queue *);
void print(struct queue *);

void insert(int no,struct queue *ref)
{
 ref->rear=(ref->rear+1)%size;
 ref->array[ref->rear]=no;
 ref->count++;
}

int del(struct queue *ref)
{
 int a;
 a=ref->array[ref->front];
 ref->front=(ref->front+1)%size;
 ref->count--;
 return(a);
}

void print(struct queue *ref)
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
 struct queue org;
 org.front=0;
 org.rear=-1;
 org.count=0;
 do
  {
   clrscr();
   printf("\n\n\t1. Insert to queue");
   printf("\n\t2. Delete from queue");
   printf("\n\t3. Display queue");
   printf("\n\t4. Exit");
   printf("\n\n\tEnter choice (1-4) : ");
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
		printf("\n\t\tEnter element : ");
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
		ele=del(&org);
		printf("\n\t\tElement popped : %d",ele);
		printf("\n\tWant to pop more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:clrscr();
	    if(org.count==0)
	     {
	      printf("\n\n\t\t\tQueue is empty");
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