/*                                Program No.:
Aim: WAP to count the number of operators, identifiers, (), {} and [] in an
     expression and display the same.
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
 clrscr();
 char *string;
 int op=0,iden=0,count_b=0,count_c=0,count_s=0;

 printf("\n\tEnter the expression: ");
 gets(string);

 for(int i=0; i<strlen(string); i++)
 {
  switch(string[i])
  {
   case '+':
   case '-':
   case '*':
   case '/':
   case '%':op++;break;
   case '(':
   case ')':count_b++;break;
   case '{':
   case '}':count_c++;break;
   case '[':
   case ']':count_s++;break;
   default:iden++;break;
  }
 }

 if(op!=0)
  printf("\n\n\t\tNo. of Operators: %d",op);
 if(iden!=0)
  printf("\n\t\tNo. of identifiers: %d",iden);
 if(count_b!=0)
  printf("\n\t\tNo. of '(': %d",count_b/2);
 if(count_c!=0)
  printf("\n\t\tNo. of '{': %d",count_c/2);
 if(count_s!=0)
  printf("\n\t\tNo. of '[': %d",count_s/2);

 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/