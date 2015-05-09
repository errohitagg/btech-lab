/*                                Program No.:
Aim: WAP to find the leftmost terminal of a given grammer consisting of
     more than one productions.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
char gram[10][50],first[10];
int n,l=0;
void func(int i)
{
 char prod;
 int t;
 for(t=0;t<strlen(gram[i]);t++)
 {
  if(gram[i][t]=='|'||gram[i][t]=='>')
  {
   if(gram[i][t+1]>=97&&gram[i][t+1]<=122)
    first[l++]=gram[i][t+1];
   else
   {
    prod=gram[i][t+1];
    for(int u=0;u<n;u++)
     if(gram[u][0]==prod&&u!=i)
      func(u);
   }
  }
 }
}
void main()
{
 clrscr();
 printf("\n\tEnter the no. of productions: ");
 scanf("%d",&n);
 printf("\n\n\tEnter the productions\n\n");
 for(int t=0;t<n;t++)
 {
  printf("\t\tProduction %d: ",t+1);
  scanf("%s",&gram[t]);
 }
 func(0);
 first[l]='\0';
 printf("\n\n\tLeftmost terminal of grammer is: %c",first[0]);
 for(t=1;t<strlen(first);t++)
  printf("|%c",first[t]);
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/