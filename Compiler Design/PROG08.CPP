/*                                Program No.:
Aim: WAP to find the rightmost terminal of a given grammer consisting of
     more than one productions.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 char gram[10][50],last,prod;
 int n,i,j,index;
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
  index=strlen(gram[i])-1;
  if(gram[i][index]>=97&&gram[i][index]<=122)
  {
   last=gram[i][index];
   break;
  }
  else
  {
   prod=gram[i][index];
   for(j=0;j<n;j++)
    if(gram[j][0]==prod&&j!=i)
    {
     i=j;
     break;
    }
  }
 }
 printf("\n\n\tRightmost terminal of grammer is: %c",last);
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/