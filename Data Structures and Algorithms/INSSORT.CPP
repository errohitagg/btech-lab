/*                                PROGRAM NO. -

Aim :- WAP to perform insertion sort on an array of randomly ordered integers
       by sorting them in ascending order.

*/

#include<stdio.h>
#include<conio.h>
#define size 50

void main()
{
 int array[size],no,i,j,temp,pos;
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
     printf("\n\n\t\tEnter the elements of the array\n\n");
     for(i=0;i<no;i++)
      {
       printf("\t\t:");
       scanf("%d",&array[i]);
      }
     clrscr();
     for(i=1;i<no;i++)
      {
       temp=array[i];
       pos=i;
       for(j=i-1;j>=0;j--)
	{
	 if(array[j]>temp)
	  {
	   array[j+1]=array[j];
	   pos=j;
	  }
	}
       array[pos]=temp;
       printf("\n\nPASS : %d\n\t",i);
       for(j=0;j<no;j++)
	printf("%d\t",array[j]);
      }
     printf("\n\n\n\nSorted array : \n\n\n");
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