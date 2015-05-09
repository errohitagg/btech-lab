/*                                Program No.:
Aim: WAP to check whether a string is generated from a given grammer or not.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

char str[50],gram[10][50];
int i,j=0,no;
void func(int n)
{
 char temp;
 int t,w;
 for(t=3;t<strlen(gram[n]);t++)
 {
  if(gram[n][t]>=97&&gram[n][t]<=122)
   str[j++]=gram[n][t];
  else
  {
   temp=gram[n][t];
   for(w=0;w<no;w++)
   {
    if(gram[w][0]==temp&&w!=n)
     func(w);
   }
  }
 }
}

void main()
{
 clrscr();
 char chk[50];
 printf("\n\tNo. of productions: ");
 scanf("%d",&no);
 printf("\n\tEnter the productions of grammar\n\n");
 for(i=0;i<no;i++)
 {
  printf("\t\tProduction %d: ",i+1);
  scanf("%s",&gram[i]);
 }
 func(0);
 str[j]='\0';
 printf("\n\n\tEnter the string: ");
 scanf("%s",&chk);
 if(strcmp(chk,str)==0)
  printf("\n\n\tThe string is valid as per given grammar.");
 else
  printf("\n\n\tThe string is not valid as per given grammar.");
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/