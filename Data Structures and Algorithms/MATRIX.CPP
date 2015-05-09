/*                                PROGRAM NO. -

Aim :- WAP to perform the following operations on 2-D matrices -
       1. Addition of two 2-D matrices
       2. Subtraction of two 2-D matrices
       3. Multiplication of two 2-D matrices
       4. Transpose of a 2-D matrix.

*/

#include<stdio.h>
#include<conio.h>
# define size 5

void main()
{
 int a[size][size],b[size][size],c[size][size];
 int arow,acol,brow,bcol,i,j,k,choice1;
 char choice2;
 do
  {
   clrscr();
   printf("\n\n\t\t\t\tMENU");
   printf("\n\n\t1. Addition");
   printf("\n\t2. Subtraction");
   printf("\n\t3. Multiplication");
   printf("\n\t4. Transpose");
   printf("\n\t5. Exit");
   printf("\n\n\t\tEnter your choice (1-5) : ");
   scanf("%d",&choice1);
   switch(choice1)
    {
     case 1:do
	     {
	      clrscr();
	      printf("\n\n\tEnter the no. of rows of A : ");
	      scanf("%d",&arow);
	      printf("\n\tEnter the no. of columns of A : ");
	      scanf("%d",&acol);
	      printf("\n\tEnter the no. of rows of B : ");
	      scanf("%d",&brow);
	      printf("\n\tEnter the no. of columns of B : ");
	      scanf("%d",&bcol);
	      if((arow!=brow)&&(acol!=bcol))
	       {
		printf("\n\n\t\tNo. of rows and columns are imbalanced");
		printf("\n\t\tPress any key");
		choice2='n';
		getch();
	       }
	      else
	       {
		printf("\n\n\tEnter the elements of A\n\n");
		for(i=0;i<arow;i++)
		 for(j=0;j<acol;j++)
		  {
		   printf("\t\t\t\t: ");
		   scanf("%d",&a[i][j]);
		  }
		printf("\n\n\tEnter the elements of B\n\n");
		for(i=0;i<brow;i++)
		 for(j=0;j<bcol;j++)
		  {
		   printf("\t\t\t\t: ");
		   scanf("%d",&b[i][j]);
		  }
		printf("\n\n\tResultant Matrix C = A + B\n\n");
		for(i=0;i<arow;i++)
		 {
		  printf("\t\t");
		  for(j=0;j<acol;j++)
		   printf("%d\t",a[i][j]+b[i][j]);
		  printf("\n");
		 }
		printf("\n\n\t\tWant to execute again (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:do
	     {
	      clrscr();
	      printf("\n\n\tEnter the no. of rows of A : ");
	      scanf("%d",&arow);
	      printf("\n\tEnter the no. of columns of A : ");
	      scanf("%d",&acol);
	      printf("\n\tEnter the no. of rows of B : ");
	      scanf("%d",&brow);
	      printf("\n\tEnter the no. of columns of B : ");
	      scanf("%d",&bcol);
	      if((arow!=brow)&&(acol!=bcol))
	       {
		printf("\n\n\t\tNo. of rows and columns are imbalanced");
		printf("\n\t\tPress any key");
		choice2='n';
		getch();
	       }
	      else
	       {
		printf("\n\n\tEnter the elements of A\n\n");
		for(i=0;i<arow;i++)
		 for(j=0;j<acol;j++)
		  {
		   printf("\t\t\t\t: ");
		   scanf("%d",&a[i][j]);
		  }
		printf("\n\n\tEnter the elements of B\n\n");
		for(i=0;i<brow;i++)
		 for(j=0;j<bcol;j++)
		  {
		   printf("\t\t\t\t: ");
		   scanf("%d",&b[i][j]);
		  }
		printf("\n\n\tResultant Matrix C = A - B\n\n");
		for(i=0;i<arow;i++)
		 {
		  printf("\t\t");
		  for(j=0;j<acol;j++)
		   printf("%d\t",a[i][j]-b[i][j]);
		  printf("\n");
		 }
		printf("\n\n\t\tWant to execute again (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:do
	     {
	      clrscr();
	      printf("\n\n\tEnter the no. of rows of A : ");
	      scanf("%d",&arow);
	      printf("\n\tEnter the no. of columns of A : ");
	      scanf("%d",&acol);
	      printf("\n\tEnter the no. of rows of B : ");
	      scanf("%d",&brow);
	      printf("\n\tEnter the no. of columns of B : ");
	      scanf("%d",&bcol);
	      if(acol!=brow)
	       {
		printf("\n\n\t\tNo. of columns of A and rows of B should"
		       "\n\t\tbe equal for multiplication.");
		printf("\n\t\tPress any key");
		choice2='n';
		getch();
	       }
	      else
	       {
		printf("\n\n\tEnter the elements of A\n\n");
		for(i=0;i<arow;i++)
		 for(j=0;j<acol;j++)
		  {
		   printf("\t\t\t\t: ");
		   scanf("%d",&a[i][j]);
		  }
		printf("\n\n\tEnter the elements of B\n\n");
		for(i=0;i<brow;i++)
		 for(j=0;j<bcol;j++)
		  {
		   printf("\t\t\t\t: ");
		   scanf("%d",&b[i][j]);
		  }
		for(i=0;i<arow;i++)
		 for(j=0;j<bcol;j++)
		  {
		   c[i][j]=0;
		   for(k=0;k<acol;k++)
		    c[i][j]+=a[i][k]*b[k][j];
		  }
		printf("\n\n\tResultant Matrix C = A * B\n\n");
		for(i=0;i<arow;i++)
		 {
		  printf("\t\t");
		  for(j=0;j<bcol;j++)
		   printf("%d\t",c[i][j]);
		  printf("\n");
		 }
		printf("\n\n\t\tWant to execute again (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 4:do
	     {
	      clrscr();
	      printf("\n\n\tEnter the no. of rows of A : ");
	      scanf("%d",&arow);
	      printf("\n\tEnter the no. of columns of A : ");
	      scanf("%d",&acol);
	      printf("\n\n\tEnter the elements of A\n\n");
	      for(i=0;i<arow;i++)
	       for(j=0;j<acol;j++)
		{
		 printf("\t\t\t\t: ");
		 scanf("%d",&a[i][j]);
		}
	      printf("\n\n\tResultant Matrix B = Transpose of A\n\n");
	      for(i=0;i<acol;i++)
	       {
		printf("\t\t");
		for(j=0;j<arow;j++)
		 printf("%d\t",a[j][i]);
		printf("\n");
	       }
	      printf("\n\n\t\tWant to execute again (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 5:break;
     default:printf("\n\n\n\t\t\tIncorrect Choice");
	     printf("\n\t\t\tPress any key");
	     getch();
    }
  }while(choice1!=5);
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/