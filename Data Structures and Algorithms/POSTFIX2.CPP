/*                                PROGRAM NO. - 08

Aim :- WAP to evaluate the given postfix expression and print it's result.

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
# define size 50

char postfix[size];
int stack[size];
int i,top=-1;

void push(int);
int pop();
int operate(int,int,char);

void push(int ref)
{
 if(top!=size-1)
  {
   top++;
   stack[top]=ref;
  }
}

int pop()
{
 int ref;
 if(top!=-1)
  {
   ref=stack[top];
   top--;
  }
 else
  ref=0;
 return(ref);
}

int operate(int no1,int no2,char ref)
{
 int ans;
 switch(ref)
  {
   case '+':ans=no2+no1;
	    break;
   case '-':ans=no2-no1;
	    break;
   case '*':ans=no2*no1;
	    break;
   case '/':ans=no2/no1;
	    break;
   case '^':ans=pow(no2,no1);
	    break;
   default:ans=0;
  }
 return(ans);
}

void main()
{
 clrscr();
 char choice;
 int op1,op2,result;
 do
  {
   clrscr();
   printf("\n\nASSUMPTION : The given postfix expression contains only unit "
	  "numbers \n\n\t\t and only the following operators :"
	  "\" ^, *, /, +, - \"");
   printf("\n\n\n\tEnter the postfix expression : ");
   scanf("%s",&postfix);
   for(i=0;postfix[i]!='\0';i++)
    {
     switch(postfix[i])
      {
       case '+':
       case '-':
       case '*':
       case '/':
       case '^':op1=pop();
		op2=pop();
		result=operate(op1,op2,postfix[i]);
		push(result);
		break;
       default:push(postfix[i]-48);
	       break;
      }
    }
   result=pop();
   printf("\n\n\tAnswer to the postfix expression : %s",postfix);
   printf("\n\n\t\t\t     is equal to : %d",result);
   printf("\n\n\n\tWant to execute again (y/n) :");
   scanf("%s",&choice);
  }while(choice=='y'||choice=='Y');
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/