/*                                PROGRAM NO. -

Aim :- WAP to perform the following operations on a linked list -
       1. Insert an Element at the Beginning
       2. Insert an Element at a given Position
       3. Insert an Element at the End
       4. Delete an Element from the Beginning
       5. Delete a given Element from the List
       6. Delete an Element from the End
       7. Search a given Element in the List
       8. Reverse a Linked List
       9. Display the Linked List.

*/

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
 int info;
 struct node *next;
};

struct node* create_node(int);
struct node* initialize_node(struct node *);
int delete_beg(struct node **);
int delete_end(struct node *);
int search(struct node *,int);
void insert_beg(struct node **);
void insert_end(struct node *);
void insert_mid(struct node *);
void display(struct node *);
void reverse_list(struct node *);
void delete_mid(struct node *);

struct node* create_node(int data)
{
 node *create_node;
 create_node=(struct node *)malloc(sizeof(struct node));
 create_node->info=data;
 create_node->next=NULL;
 return(create_node);
}

struct node* initialize_node(struct node *start)
{
 start=NULL;
 return(start);
}

void insert_beg(struct node **start)
{
 struct node *new_node;
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

void insert_mid(struct node *start)
{
 struct node *new_node,*cur_node;
 int data,ele,flag=0;
 printf("\n\n\tEnter the information : ");
 scanf("%d",&data);
 printf("\tEnter the Element for Insertion : ");
 scanf("%d",&ele);
 new_node=create_node(data);
 if(new_node!=NULL)
  {
   cur_node=start;
   while(cur_node!=NULL)
    {
     if(cur_node->info==ele)
      {
       flag=1;
       break;
      }
     cur_node=cur_node->next;
    }
   if(flag==0)
    {
     printf("\n\n\tElement is not present in the list");
     printf("\n\tInsertion can't be done");
    }
   else
    {
     new_node->next=cur_node->next;
     cur_node->next=new_node;
    }
  }
 else
  {
   printf("\n\n\tNode can't be created");
   printf("\n\tPress any key");
   getch();
  }
}

void insert_end(struct node *start)
{
 struct node *new_node,*cur_node;
 int data;
 printf("\n\n\tEnter the information : ");
 scanf("%d",&data);
 new_node=create_node(data);
 if(new_node!=NULL)
  {
   cur_node=start;
   while(cur_node->next!=NULL)
    cur_node=cur_node->next;
   cur_node->next=new_node;
   new_node->next=NULL;
  }
 else
  {
   printf("\n\n\tNode can't be created");
   printf("\n\tPress any key");
   getch();
  }
}

void display(struct node *start)
{
 struct node *cur_node;
 if(start==NULL)
   printf("\n\n\tList is Empty");
 else
  {
   cur_node=start;
   printf("\n\n\n\t%d\t<- Beginning of List\n",cur_node->info);
   while(cur_node->next!=NULL)
    {
     cur_node=cur_node->next;
     printf("\t%d\n",cur_node->info);
    }
  }
}

int delete_beg(struct node **start)
{
 int data;
 struct node *cur_node;
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

void delete_mid(struct node *start)
{
 struct node *cur_node,*prev_node;
 int data,flag=0;
 if(start==NULL)
  printf("\n\n\tList is Empty");
 else
  {
   printf("\n\n\tEnter the element to be deleted : ");
   scanf("%d",&data);
   prev_node=start;
   cur_node=start;
   while(prev_node->next!=NULL)
    {
     if(cur_node->info==data)
      {
       flag=1;
       break;
      }
     prev_node=cur_node;
     cur_node=cur_node->next;
    }
   if(flag==0)
    printf("\n\n\tThe element %d is not present in the List",data);
   else
    {
     prev_node->next=cur_node->next;
     delete(cur_node);
     printf("\n\n\tElement has been deleted");
     printf("\n\tPress any key");
     getch();
    }
  }
}

int delete_end(struct node *start)
{
 struct node *cur_node,*prev_node;
 int data;
 if(start==NULL)
  data=-9999;
 else
  {
   prev_node=NULL;
   cur_node=start;
   while(cur_node->next!=NULL)
    {
     prev_node=cur_node;
     cur_node=cur_node->next;
    }
   data=cur_node->info;
   prev_node->next=NULL;
   delete(cur_node);
  }
 return(data);
}

void reverse_list(struct node *start)
{
 struct node *prev_node,*cur_node,*next_node;
 prev_node=NULL;
 cur_node=start;
 next_node=cur_node->next;
 cur_node->next=NULL;
 while(next_node!=NULL)
  {
   prev_node=cur_node;
   cur_node=next_node;
   next_node=next_node->next;
   cur_node->next=prev_node;
  }
 printf("\n\n\t\tReversed Linked List");
 printf("\n\n\n\n\t%d\t<- Beginning of List\n",cur_node->info);
 while(cur_node->next!=NULL)
  {
   cur_node=cur_node->next;
   printf("\t%d\n",cur_node->info);
  }
}

int search(struct node *start,int data)
{
 struct node *cur_node;
 int flag=0;
 cur_node=start;
 while(cur_node->next!=NULL)
  {
   if(cur_node->info==data)
    {
     flag=1;
     break;
    }
   cur_node=cur_node->next;
  }
 return(flag);
}

void main()
{
 int choice1,flag,del_ele,data;
 char choice2;
 struct node *start;
 start=initialize_node(start);
 do
  {
   clrscr();
   printf("\n\n\t\t\tMENU");
   printf("\n\n\n\t1. Insert at Beginning");
   printf("\n\t2. Insert after an Element");
   printf("\n\n\t3. Insert at End");
   printf("\n\t4. Delete from Beginning");
   printf("\n\n\t5. Delete an Element");
   printf("\n\t6. Delete from End");
   printf("\n\n\t7. Search an Element");
   printf("\n\t8. Reverse a Link List");
   printf("\n\n\t9. Display Linked List");
   printf("\n\t10. Exit");
   printf("\n\n\tEnter your choice (1-10) : ");
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
	      insert_mid(start);
	      printf("\n\tWant to enter more (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:clrscr();
	    do
	     {
	      insert_end(start);
	      printf("\n\tWant to enter more (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 4:clrscr();
	    do
	     {
	      del_ele=delete_beg(&start);
	      if(del_ele==-9999)
	       printf("\n\n\tList is Empty");
	      else
	       printf("\n\tElement deleted is : %d",del_ele);
	      printf("\n\tWant to delete more (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 5:clrscr();
	    do
	     {
	      delete_mid(start);
	      printf("\n\tWant to delete more (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 6:clrscr();
	    do
	     {
	      del_ele=delete_end(start);
	      if(del_ele==-9999)
	       printf("\n\n\tList is Empty");
	      else
	       printf("\n\tElement deleted is : %d",del_ele);
	      printf("\n\tWant to delete more (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 7:clrscr();
	    do
	     {
	      printf("\n\n\tEnter the element to be searched :");
	      scanf("%d",&data);
	      flag=search(start,data);
	      if(flag==1)
	       printf("\n\n\tSearch Successful. Element is present");
	      else
	       printf("\n\n\tSearch Unsuccessful. Element is not present");
	      printf("\n\tWant to search more (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 8:clrscr();
	    reverse_list(start);
	    printf("\n\n\tPress any key");
	    getch();
	    break;
     case 9:clrscr();
	    display(start);
	    printf("\n\n\tPress any key");
	    getch();
	    break;
     case 10:break;
     default:printf("\n\n\t\tIncorrect Choice");
	     printf("\n\t\tPress any key");
	     getch();
	     break;
    }
  }while(choice1!=10);
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/