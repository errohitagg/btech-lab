/*                                PROGRAM NO. -

Aim :- WAP to perform the following operations on the strings -
       1. Length of the string
       2. Reversing of the string
       3. Concatenation of two strings
       4. String is palindrome or not.

*/

#include<stdio.h>
#include<conio.h>
# define size 50

void main()
{
 int i,j,len1,len2,choice1,flag=0;
 char str1[size],str2[size],str3[size*2],choice2;
 do
  {
   clrscr();
   printf("\n\n\t\t\tMENU");
   printf("\n\n\t1. Length");
   printf("\n\t2. Reversing");
   printf("\n\t3. Concatenation");
   printf("\n\t4. Palindrome");
   printf("\n\t5. Exit");
   printf("\n\n\tEnter your choice (1-5) : ");
   scanf("%d",&choice1);
   switch(choice1)
    {
     case 1:clrscr();
	    do
	     {
	      printf("\n\n\tEnter the string : ");
	      gets(str1);
	      len1=0;
	      while(str1[len1]!='\0')
	       len1++;
	      printf("\n\n\tLength of the string : %d",len1);
	      printf("\n\n\tWant to execute again (y/n) : ");
	      scanf("%s",&choice2);
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 2:clrscr();
	    do
	     {
	      printf("\n\n\tEnter the string : ");
	      gets(str1);
	      len1=0;
	      while(str1[len1]!='\0')
	       len1++;
	      if(len1>=50)
	       {
		printf("\n\n\t\tLength of the string is beyond limit");
		printf("\n\t\tString can't be reversed");
		printf("\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		i=0;
		j=len1-1;
		while(str1[i]!='\0')
		 str2[j--]=str1[i++];
		str2[len1]='\0';
		printf("\n\n\tReversed string is : %s",str2);
		printf("\n\n\tWant to execute again (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 3:clrscr();
	    do
	     {
	      printf("\n\n\tEnter the string1 : ");
	      gets(str1);
	      printf("\n\n\tEnter the string2 : ");
	      gets(str2);
	      len1=0;
	      while(str1[len1]!='\0')
	       len1++;
	      len2=0;
	      while(str2[len2]!='\0')
	       len2++;
	      if(len1>=50||len2>=50)
	       {
		printf("\n\n\t\tLength of either string is beyond limit");
		printf("\n\t\tStrings can't be concatenated");
		printf("\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		i=0;
		j=0;
		while(str1[i]!='\0')
		 str3[j++]=str1[i++];
		str3[j++]=' ';
		i=0;
		while(str2[i]!='\0')
		 str3[j++]=str2[i++];
		str3[j]='\0';
		printf("\n\tConcatenated string is : %s",str3);
		printf("\n\n\tWant to execute again (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 4:clrscr();
	    do
	     {
	      printf("\n\n\tEnter the string : ");
	      gets(str1);
	      len1=0;
	      while(str1[len1]!='\0')
	       len1++;
	      if(len1>=50)
	       {
		printf("\n\n\t\tLength of the string is beyond limit");
		printf("\n\t\tString can't be checked for palindrome");
		printf("\n\t\tPress any key");
		getch();
		choice2='n';
	       }
	      else
	       {
		for(i=0;i<len1/2;i++)
		 if(str1[i]!=str1[len1-1-i])
		  flag=1;
		if(flag==0)
		 printf("\n\n\tString \'%s\' is a palindrome",str1);
		else
		 printf("\n\n\tString \'%s\' is not a palindrome",str1);
		printf("\n\n\tWant to execute again (y/n) : ");
		scanf("%s",&choice2);
	       }
	     }while(choice2=='y'||choice2=='Y');
	    break;
     case 5:break;
     default:printf("\n\n\t\tIncorrect choice");
	     printf("\n\t\tPress any key");
	     getch();
	     break;
    }
  }while(choice1!=5);
 getch();
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/