/* 				  Program No.:
Aim: WAP to check whether a given expression follows the grammer a^n.
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
 clrscr();
 char *exp;
 int flag=0;
 printf("\n\t\tEnter the expression: ");
 gets(exp);
 if(exp[0]!='a')
  flag=1;
 else
 {
  for(int i=0;i<strlen(exp);i++)
  {
   if(exp[i]!='a')
   {
    flag=1;
    break;
   }
  }
 }
 if(flag==0)
  printf("\n\n\t\tExpression is as per grammer a^n.");
 else
  printf("\n\n\t\tExpression is not as per grammer a^n.");
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/