/*                                PROGRAM NO. -

Aim :- WAP to search an element in an array using binary search and using
       iteration in the function.

*/

#include<stdio.h>
#include<conio.h>
# define size 50

int bsearch(int,int,int[]);

int bsearch(int s,int ele,int array[])
{
 int low=0,up=s-1,mid;
 while(low<=up)
  {
   mid=(low+up)/2;
   if(array[mid]==ele)
    return(0);
   else if(array[mid]>ele)
    up=mid-1;
   else
    low=mid+1;
  }
 return(1);
}

void main()
{
 int array[size],i,s,ele,ans;
 char choice;
 do
  {
   clrscr();
   printf("\n\n\tEnter the size of the array : ");
   scanf("%d",&s);
   printf("\n\n\tEnter the elements of the array");
   printf("\n\t\t    (Ascending Order)   ");
   for(i=0;i<s;i++)
    {
     printf(": ");
     scanf("%d",&array[i]);
     if((array[i]<array[i-1])&&(i!=0))
      {
       printf("\n\n\t\tEnter the elements only in ascending order"
	      "\n\t\tEnter this element again\n\n\t\t\t\t\t");
       i--;
       continue;
      }
     printf("\t\t\t\t\t");
    }
   printf("\n\n\n\tEnter the element to be searched : ");
   scanf("%d",&ele);
   ans=bsearch(s,ele,array);
   if(ans==0)
    printf("\n\n\n\tThe array consists of the element %d",ele);
   else
    printf("\n\n\n\tThe array does not consists of the element %d",ele);
   printf("\n\n\n\n\t\tWant to continue (y/n) : ");
   scanf("%s",&choice);
  }while(choice=='y'||choice=='Y');
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/