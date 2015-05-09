/*                                PROGRAM NO. -

Aim :- WAP to perform selection sort on an array of randomly ordered integers
       by sorting them in ascending order.

*/

#include<stdio.h>
#include<conio.h>
#define size 50

void main()
{
 int no,array[size],i,j,temp,min,pos;
 char choice;
 do
  {
   clrscr();
   printf("\n\n\tEnter the no. of elements of the arrray : ");
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
     printf("\n\n\t\tEnter the elements of array\n\n");
     for(i=0;i<no;i++)
      {
       printf("\t\t:");
       scanf("%d",&array[i]);
      }
     clrscr();
     for(i=0;i<(no-1);i++)
      {
       min=array[i];
       pos=i;
       for(j=i;j<no;j++)
	{
	 if(array[j]<min)
	  {
	   min=array[j];
	   pos=j;
	  }
	}
       temp=array[pos];
       array[pos]=array[i];
       array[i]=temp;
       printf("\n\nPASS %d :\n\t",i+1);
       for(j=0;j<no;j++)
	printf("%d\t",array[j]);
      }
     printf("\n\n\nSorted array is : \n\n\n");
     for(i=0;i<no;i++)
      printf("%d\t",array[i]);
    }
   printf("\n\n\n\n\tWant to execute again (y/n) : ");
   scanf("%s",&choice);
  }while(choice=='y'||choice=='Y');
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/