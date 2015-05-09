/*				  Program No.:
Aim: WAP to check whether a given expression follows the grammer (a^n.b^n).
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char *exp;
 int flag=0,order=0,count_a=0,count_b=0;
 printf("\n\t\tEnter the expression: ");
 gets(exp);
 if(exp[0]!='a')
  flag=1;
 else
 {
  for(int i=0;i<strlen(exp);i++)
  {
   if(exp[i]=='a'&&order==0)
    count_a++;
   else if(exp[i]=='b')
   {
    count_b++;
    order=1;
   }
   else
   {
    flag=1;
    break;
   }
  }
 }
 if(flag==1||count_a!=count_b)
  printf("\n\n\t\tExpression is not as per grammer (a^n.b^n).");
 else if(count_a==count_b)
  printf("\n\n\t\tExpression is as per grammer (a^n.b^n).");
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/