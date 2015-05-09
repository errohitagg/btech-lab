/*                                Program No.:
Aim: WAP to check whether a given expression has equal number of (), {}
     and []. Also, check whether they are paired correctly and show the
     corresponding output.
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
 clrscr();
 char *string;
 int count_b=0, count_c=0, count_s=0;
 int regular_b=0, regular_c=0, regular_s=0;
 int present_b=0, present_c=0, present_s=0;

 printf("\n\tEnter the expression: ");
 gets(string);

 for(int i=0; i<strlen(string); i++)
 {
  switch(string[i])
  {
   case '(':count_b++;present_b=1;break;
   case ')':count_b--;break;
   case '{':count_c++;present_c=1;break;
   case '}':count_c--;break;
   case '[':count_s++;present_s=1;break;
   case ']':count_s--;break;
   default:break;
  }
  if(count_b<0)
   regular_b=1;
  if(count_c<0)
   regular_c=1;
  if(count_s<0)
   regular_s=1;
 }

 if(present_b == 1)
 {
  if(regular_b == 0)
  {
   if(count_b == 0)
    printf("\n\t\t() are equal in numbers.");
   else
    printf("\n\t\t() are not equal in numbers.");
  }
  else
   printf("\n\t\t() are not correctly paired.");
 }
 if(present_c == 1)
 {
  if(regular_c == 0)
  {
   if(count_c == 0)
    printf("\n\t\t{} are equal in numbers.");
   else
    printf("\n\t\t{} are not equal in numbers.");
  }
  else
   printf("\n\t\t{} are not correctly paired.");
 }
 if(present_s == 1)
 {
  if(regular_s == 0)
  {
   if(count_s == 0)
    printf("\n\t\t[] are equal in numbers.");
   else
    printf("\n\t\t[] are not equal in numbers.");
  }
  else
   printf("\n\t\t[] are not correctly paired.");
 }

 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/