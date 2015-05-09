/*                                Program No.:
Aim: WAP to find the leftmost terminal of a given grammer consisting of
     more than one productions.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 char gram[10][50],first,prod;
 int n,i,j;
 printf("\n\tEnter the no. of productions: ");
 scanf("%d",&n);
 printf("\n\n\tEnter the productions\n\n");
 for(i=0;i<n;i++)
 {
  printf("\t\tProduction %d: ",i+1);
  scanf("%s",&gram[i]);
 }
 for(i=0;i<n;)
 {
  if(gram[i][3]>=97&&gram[i][3]<=122)
  {
   first=gram[i][3];
   break;
  }
  else
  {
   prod=gram[i][3];
   for(j=0;j<n;j++)
    if(gram[j][0]==prod&&j!=i)
    {
     i=j;
     break;
    }
  }
 }
 printf("\n\n\tLeftmost terminal of grammer is: %c",first);
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/