/*                                PROGRAM NO. -

Aim :- WAP to represent linked list implementation of a queue and perform
       the following operations on the queue - 1. Insertion, 2. Deletion,
       3. Display.

*/

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct queue
{
 int info;
 struct queue *next;
};

struct queue* create_node(int);
void initialize_queue(struct queue **,struct queue **);
int delete_beg(struct queue **,struct queue **);
void insert_end(struct queue **,struct queue **);
void display(struct queue *);

struct queue* create_node(int data)
{
 struct queue *create_node;
 create_node=(struct queue *)malloc(sizeof(struct queue));
 create_node->info=data;
 create_node->next=NULL;
 return(create_node);
}

void initialize_queue(struct queue **front,struct queue **rear)
{
 (*front)=NULL;
 (*rear)=NULL;
}

void insert_end(struct queue **front,struct queue **rear)
{
 struct queue *new_node,*cur_node;
 int data;
 printf("\n\n\tEnter the information : ");
 scanf("%d",&data);
 new_node=create_node(data);
 if(new_node!=NULL)
  {
   if(((*front)==NULL)&&((*rear)==NULL))
    {
     (*front)=new_node;
     (*rear)=new_node;
    }
   else
    {
     (*front)->next=new_node;
     (*front)=new_node;
    }
  }
 else
  {
   printf("\n\n\tNode can't be created");
   printf("\n\tPress any key");
   getch();
  }
}

void display(struct queue *rear)
{
 struct queue *cur_node;
 if(rear==NULL)
   printf("\n\n\tQueue is Empty");
 else
  {
   cur_node=rear;
   printf("\n\n\n\t%d\t<- Rear of queue",cur_node->info);
   while(cur_node->next!=NULL)
    {
     printf("\n");
     cur_node=cur_node->next;
     printf("\t%d",cur_node->info);
    }
   printf("\t<- Front of queue");
  }
}

int delete_beg(struct queue **front,struct queue **rear)
{
 int data;
 struct queue *cur_node;
 if(((*front)==NULL)&&((*rear)==NULL))
  data=-9999;
 else
  {
   if((*front)==(*rear))
    {
     data=(*rear)->info;
     cur_node=*rear;
     (*rear)=(*rear)->next;
     (*front)=(*front)->next;
     delete(cur_node);
    }
   else
    {
     data=(*rear)->info;
     cur_node=*rear;
     (*rear)=(*rear)->next;
     delete(cur_node);
    }
  }
 return(data);
}

void main()
{
 int choice1,del_ele;
 char choice2;
 struct queue *front,*rear;
 initialize_queue(&front,&rear);
 do
  {
   clrscr();
   printf("\n\n\t\t\tMENU");
   printf("\n\n\n\t1. Insert Element");
   printf("\n\t2. Delete Element");
   printf("\n\n\t3. Display Queue");
   printf("\n\t4. Exit");
   printf("\n\n\tEnter your choice (1-4) : ");
   scanf("%d",&choice1);
   switch(choice1)
    {
     case 1:clrscr();
	    do
	     {
	      insert_end(&front,&rear);
	      printf("\n\tWant to enter more (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:clrscr();
	    do
	     {
	      del_ele=delete_beg(&front,&rear);
	      if(del_ele==-9999)
	       {
		printf("\n\n\tQueue is Empty");
		printf("\n\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		printf("\n\tElement deleted is : %d",del_ele);
		printf("\n\tWant to delete more (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:clrscr();
	    display(rear);
	    printf("\n\n\tPress any key");
	    getch();
	    break;
     case 4:break;
     default:printf("\n\n\t\tIncorrect Choice");
	     printf("\n\t\tPress any key");
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