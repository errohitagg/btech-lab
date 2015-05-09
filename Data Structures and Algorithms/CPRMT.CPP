/*                                PROGRAM NO. - 01

Aim :- WAP to reverse a string using command line parameters, display the
       reversed string, display no. of words in the string and display the
       no. of bytes used to display all.

*/

#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
 int no_of_bytes=0,i;
 char *ref;
 printf("\nOriginal String : ");
 for(i=1;i<argc;i++)
  {
   printf("%s",argv[i]);
   printf(" ");
  }
 no_of_bytes+=printf("\nNo. of words : %d",argc-1);
 no_of_bytes+=printf("\nReversed String : ");
 for(i=argc-1;i>0;i--)
  {
   ref=argv[i];
   strrev(ref);
   no_of_bytes+=printf("%s",ref);
   no_of_bytes+=printf(" ");
  }
 printf("\nNo. of bytes = %d\n",no_of_bytes);
}
/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/