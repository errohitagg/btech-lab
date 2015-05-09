/*                                Program No.:
Aim: WAP to perform left factoring on a given grammer.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 char gram[50],temp[2][25],sym;
 int i,j,k,flag=0,pos;
 printf("\n\n\tEnter the production: ");
 scanf("%s",&gram);
 sym=gram[0];
 for(i=3,j=0,k=0;i<strlen(gram);i++)
 {
  if(gram[i]=='|')
   flag=1;
  else if(flag==0)
   temp[0][j++]=gram[i];
  else
   temp[1][k++]=gram[i];
 }
 temp[0][j]='\0';
 temp[1][k]='\0';
 for(i=0,j=0;i<strlen(temp[0])&&j<strlen(temp[1]);i++,j++)
  if(temp[0][i]!=temp[1][j])
  {
   pos=i;
   break;
  }
 if(i==strlen(temp[0]))
  pos=i;
 if(j==strlen(temp[1]))
  pos=j;
 printf("\n\n\tProduction after left factoring:");
 printf("\n\n\t\t%c->",sym);
 for(i=0;i<pos;i++)
  printf("%c",temp[0][i]);
 printf("%c'\n\t\t%c'->",sym,sym);
 for(i=pos;i<strlen(temp[0]);i++)
  printf("%c",temp[0][i]);
 printf("|");
 for(i=pos;i<strlen(temp[1]);i++)
  printf("%c",temp[1][i]);
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/