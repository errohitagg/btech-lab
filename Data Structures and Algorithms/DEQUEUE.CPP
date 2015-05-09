/*                                PROGRAM NO. - 05

Aim :- WAP to represent array implementation of a dequeue and perform the
       following operations on both front and rear ends of the dequeue -
       1. Insertion, 2. Deletion, 3. Display.

*/

#include<stdio.h>
#include<conio.h>
# define size 50

struct queue
{
 int front,rear,count;
 int array[size];
};

void insert_front(int,struct queue *);
void insert_rear(int,struct queue *);
int del_front(struct queue *);
int del_rear(struct queue *);
void print(struct queue *);

void insert_front(int no,struct queue *ref)
{
 if(ref->front==0)
  ref->front=size-1;
 else
  ref->front--;
 ref->array[ref->front]=no;
 ref->count++;
}

void insert_rear(int no,struct queue *ref)
{
 ref->rear=(ref->rear+1)%size;
 ref->array[ref->rear]=no;
 ref->count++;
}

int del_front(struct queue *ref)
{
 int a;
 a=ref->array[ref->front];
 ref->front=(ref->front+1)%size;
 ref->count--;
 return(a);
}

int del_rear(struct queue *ref)
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
 org.rear=size-1;
 org.count=0;
 do
  {
   clrscr();
   printf("\n\n\t1. Insert to front of dequeue");
   printf("\n\t2. Insert to rear of dequeue");
   printf("\n\t3. Delete from front of dequeue");
   printf("\n\t4. Delete from rear of dequeue");
   printf("\n\t5. Display dequeue");
   printf("\n\t6. Exit");
   printf("\n\n\tEnter choice (1-6) : ");
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
		printf("\n\t\tEnter element to front : ");
		scanf("%d",&ele);
		insert_front(ele,&org);
		printf("\n\tWant to enter more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:clrscr();
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
		printf("\n\t\tEnter element to rear : ");
		scanf("%d",&ele);
		insert_rear(ele,&org);
		printf("\n\tWant to enter more (y/n) : ");
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
		ele=del_front(&org);
		printf("\n\t\tElement popped from front : %d",ele);
		printf("\n\tWant to pop more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 4:clrscr();
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
     case 5:clrscr();
	    if(org.count==0)
	     {
	      printf("\n\n\t\t\tDequeue is empty");
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