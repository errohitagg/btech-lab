/*                                PROGRAM NO. -

Aim :- WAP to perform quick sort on an array of randomly ordered integers
       by sorting them in ascending order using recursion.

*/

#include<stdio.h>
#include<conio.h>
#define size 50

int array[size],i,j,k,no,count=0;
void quick_sort(int,int);

void quick_sort(int x,int y)
{
 int pivot,temp;
 if(y>x)
  {
   i=x+1;
   j=y;
   pivot=array[x];
   while(i<=j)
    {
     while((array[i]<=pivot)&&(i<=y))
      i++;
     while((array[j]>pivot)&&(j>=x))
      j--;
     if(i<j)
      {
       temp=array[i];
       array[i]=array[j];
       array[j]=temp;
      }
    }
   if(x<j)
    {
     temp=array[x];
     array[x]=array[j];
     array[j]=temp;
     printf("\n\nPASS : %d\n\t",++count);
     for(k=0;k<no;k++)
      {
       printf("%d\t",array[k]);
      }
    }
   quick_sort(x,j-1);
   quick_sort(j+1,y);
  }
}

void main()
{
 char choice;
 do
  {
   clrscr();
   printf("\n\n\tEnter the no. of elements : ");
   scanf("%d",&no);
   if(no>size)
    {
     printf("\n\n\n\t\tArray can't be formed.");
     printf("\n\t\tNo. of elements greater than 50.");
     printf("\n\t\tPress any key");
     getch();
    }
   else
    {
     printf("\n\n\tEnter the elements of the array\n\n");
     for(i=0;i<no;i++)
      {
       printf("\t\t:");
       scanf("%d",&array[i]);
      }
     clrscr();
     quick_sort(0,no-1);
     printf("\n\n\n\nSorted Array : \n\n\n");
     for(i=0;i<no;i++)
      printf("%d\t",array[i]);
     printf("\n\n\n\n\tWant to execute again (y/n) : ");
     scanf("%s",&choice);
    }
  }while(choice=='y'||choice=='Y');
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/