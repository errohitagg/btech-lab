/*                                PROGRAM NO. -

Aim :- WAP to represent linked list implementation of a stack and perform
       the following operations on the stack - 1. Push, 2. Pop, 3. Display.

*/

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct stack
{
 int info;
 struct stack *next;
};

struct stack* create_node(int);
struct stack* initialize_stack(struct stack *);
int pop(struct stack **);
void push(struct stack **);
void display(struct stack *);

struct stack* create_node(int data)
{
 struct stack *create_node;
 create_node=(struct stack *)malloc(sizeof(struct stack));
 create_node->info=data;
 create_node->next=NULL;
 return(create_node);
}

struct stack* initialize_stack(struct stack *start)
{
 start=NULL;
 return(start);
}

void insert_beg(struct stack **start)
{
 struct stack *new_node;
 int data;
 printf("\n\n\tEnter the information : ");
 scanf("%d",&data);
 new_node=create_node(data);
 if(new_node!=NULL)
  {
   if(*start==NULL)
     *start=new_node;
   else
    {
     new_node->next=*start;
     *start=new_node;
    }
  }
 else
  {
   printf("\n\n\tNode can't be created");
   printf("\n\tPress any key");
   getch();
  }
}

void display(struct stack *start)
{
 struct stack *cur_node;
 if(start==NULL)
   printf("\n\n\tStack is Empty");
 else
  {
   cur_node=start;
   printf("\n\n\n\t%d\t<- Top Of Stack\n",cur_node->info);
   while(cur_node->next!=NULL)
    {
     cur_node=cur_node->next;
     printf("\t%d\n",cur_node->info);
    }
  }
}

int delete_beg(struct stack **start)
{
 int data;
 struct stack *cur_node;
 if(*start==NULL)
  data=-9999;
 else
  {
   data=(*start)->info;
   cur_node=*start;
   (*start)=(*start)->next;
   delete(cur_node);
  }
 return(data);
}

void main()
{
 int choice1,del_ele;
 char choice2;
 struct stack *start;
 start=initialize_stack(start);
 do
  {
   clrscr();
   printf("\n\n\t\t\tMENU");
   printf("\n\n\n\t1. Push to Stack");
   printf("\n\t2. Pop from Stack");
   printf("\n\n\t3. Display Stack");
   printf("\n\t4. Exit");
   printf("\n\n\tEnter your choice (1-4) : ");
   scanf("%d",&choice1);
   switch(choice1)
    {
     case 1:clrscr();
	    do
	     {
	      insert_beg(&start);
	      printf("\n\tWant to enter more (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:clrscr();
	    do
	     {
	      del_ele=delete_beg(&start);
	      if(del_ele==-9999)
	       {
		printf("\n\n\tStack is Empty");
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
	    display(start);
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