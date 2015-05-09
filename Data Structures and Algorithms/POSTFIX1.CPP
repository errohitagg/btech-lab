/*                                PROGRAM NO. - 07

Aim :- WAP to print the equivalent postfix expression for the given infix
       expression using stacks.

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
# define size 50

char infix[size],postfix[size],stack[size];
int i,top=0;

void push(char);
char pop();
char top_element();
int priority(char);
int braces(char *);

void push(char ch)
{
 if(top!=size-1)
  {
   top++;
   stack[top]=ch;
  }
}

char pop()
{
 char ref;
 if(top!=0)
  {
   ref=stack[top];
   top--;
  }
 else
  ref='#';
 return(ref);
}

char top_element()
{
 char ref;
 if(top!=0)
  ref=stack[top];
 else
  ref='#';
 return(ref);
}

int priority(char ref)
{
 switch(ref)
  {
   case '^':return(3);
   case '*':return(2);
   case '/':return(2);
   case '+':return(1);
   case '-':return(1);
   default:return(0);
  }
}

int braces(char *ref)
{
 int left,right;
 left=right=0;
 for(i=0;ref[i];i++)
  {
   if(ref[i]=='(')
    left++;
   else if(ref[i]==')')
    right++;
  }
 if(left==right)
  return(0);
 else
  return(-1);
}

void main()
{
 int pr_cur,pr_pre,popped,check,j;
 char op_pre,op_cur,choice;
 do
  {
   clrscr();
   stack[top]='#';
   j=0;
   strcpy(postfix," ");
   printf("\n\nASSUMPTION : The infix expression contains only single "
	  "letter variables and \n\n\t\t only the following operators : "
	  "\" (, ), ^, *, /, +, - \"");
   printf("\n\n\n\tEnter the infix expression : ");
   scanf("%s",&infix);
   check=braces(infix);
   if(check!=0)
    {
     printf("\n\n\n\t\t\tUnbalanced number of braces");
     printf("\n\n\t\t\t\tPress any key");
     choice='n';
     getch();
    }
   else
    {
     for(i=0;infix[i]!='\0';i++)
      {
       switch(infix[i])
	{
	 case '^':
	 case '*':
	 case '/':
	 case '+':
	 case '-':if(stack[top]=='#')
		   {
		    push(infix[i]);
		    break;
		   }
		  else
		   {
		    op_cur=infix[i];
		    pr_cur=priority(op_cur);
		    op_pre=top_element();
		    pr_pre=priority(op_pre);
		    if(pr_cur>pr_pre)
		     push(op_cur);
		    else
		     {
		      while(pr_pre>=pr_cur)
		       {
			if(op_pre=='#')
			 break;
			popped=pop();
			postfix[j++]=popped;
			op_pre=top_element();
			pr_pre=priority(op_pre);
		       }
		      push(op_cur);
		     }
		    break;
		   }
	 case '(':op_cur=infix[i];
		  push(op_cur);
		  break;
	 case ')':while((popped=pop())!='(')
		   postfix[j++]=popped;
		  break;
	 default:postfix[j++]=infix[i];
		 break;
	}
      }
     while((popped=pop())!='#')
      postfix[j++]=popped;
     postfix[j]='\0';
     printf("\n\n\tThe equivalent postfix expression is : ");
     printf("\n\n\t\t%s",postfix);
     printf("\n\n\n\tWant to execute again (y/n) : ");
     scanf("%s",&choice);
    }
  }while(choice=='y'||choice=='Y');
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/