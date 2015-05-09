/*                                Program No. :
Aim: WAP to find the terminals and non-terminals of a given grammer consisting
     of more than one productions.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char gram[10][50];
 int n,i,j,term=0;
 printf("\n\tEnter the no. of productions: ");
 scanf("%d",&n);
 printf("\n\n\tEnter the productions\n");
 for(i=0;i<n;i++)
 {
  printf("\t\tProduction %d: ",i+1);
  scanf("%s",&gram[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=3;j<strlen(gram[i]);j++)
  {
   if(gram[i][j]>=97&&gram[i][j]<=122)
    term++;
  }
 }
 printf("\n\n\n\tNo. of terminal: %d",term);
 printf("\n\n\n\tNo. of non-terminal: %d",n);
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/