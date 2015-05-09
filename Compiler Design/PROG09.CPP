/*                                Program No.:
Aim: WAP to remove left recursion from a given grammer.
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
 clrscr();
 char gram[50],sym,temp[50][2];
 int i,j,k,flag=0,tr=0;
 printf("\n\n\tEnter the production: ");
 scanf("%s",&gram);
 sym=gram[0];
 if(gram[3]>=65&&gram[3]<=91)
  if(gram[3]!=sym)
   flag=1;
 for(i=4,j=0,k=0;i<strlen(gram);i++)
 {
  if(gram[i]=='|')
   tr=1;
  else if(tr==1)
   temp[0][j++]=gram[i];
  else
   temp[1][k++]=gram[i];
 }
 temp[0][j]='\0';
 temp[1][k]='\0';
 if(flag==1)
  printf("\n\n\tProduction does not have any left recursion.");
 else
 {
  printf("\n\n\tAfter left recursion:\n\n\t\t");
  printf("%c->%s%c'",sym,temp[0],sym);
  printf("\n\t\t%c'->%s%c'|^",sym,temp[1],sym);
 }
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/