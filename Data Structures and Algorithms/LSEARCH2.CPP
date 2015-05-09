/*                                PROGRAM NO. -

Aim :- WAP to search an element in a 2-D array using linear search.

*/

#include<stdio.h>
#include<conio.h>
# define size 5

int array[size][size];
int lsearch(int,int,int);

int lsearch(int row,int col,int ele)
{
 int i,j;
 for(i=0;i<row;i++)
  for(j=0;j<col;j++)
   if(array[i][j]==ele)
    return(1);
 return(0);
}

void main()
{
 int i,j,row,col,ans,ele;
 char choice;
 do
  {
   clrscr();
   printf("\n\n\tEnter the no. of rows of matrix : ");
   scanf("%d",&row);
   printf("\n\tEnter the no. of columns of matrix : ");
   scanf("%d",&col);
   printf("\n\n\tEnter the elements of matrix\n\n");
   for(i=0;i<row;i++)
    for(j=0;j<col;j++)
     {
      printf("\t\t\t\t    : ");
      scanf("%d",&array[i][j]);
     }
   printf("\n\n\tEnter the element to be searched : ");
   scanf("%d",&ele);
   ans=lsearch(row,col,ele);
   if(ans==0)
    printf("\n\n\n\tThe array does not consists of the element %d",ele);
   else
    printf("\n\n\n\tThe array consists of the element %d",ele);
   printf("\n\n\n\n\t\tWant to continue (y/n) : ");
   scanf("%s",&choice);
  }while(choice=='y'||choice=='Y');
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/