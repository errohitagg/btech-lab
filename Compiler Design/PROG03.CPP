/*                                Program No.:
Aim: WAP to read a C Program File and seperate the tokens in the C Program.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define header 4
#define key 8
#define op 8
#define pun 7

void main()
{
 clrscr();
 FILE *file;
 char ch,*cur,**list;
 char head[header][20]={"stdio.h","conio.h","stdlib.h","math.h"};
 char keyw[key][20]={"void","int","float","char","include","return","main","printf"};
 char oper[op][2]={"+","-","/","*","%","=","<",">"};
 char punc[pun][2]={"{","}","(",")","#",";",","};
 int i=0,j,count=0,value;
 int d_head=7,d_key=7,d_oper=7,d_punc=7,d_iden=7;

 file=fopen("add.c","r");
 if(file==NULL)
 {
  printf("Cannot open input file.\n");
  getch();
  exit(1);
 }
 printf("Contents of the file:\n\n\n");
 do
 {
  ch=fgetc(file);
  printf("%c",ch);
  switch(ch)
  {
   case '\n':
   case ' ':
	cur[i]='\0';
	if(i!=0)
	 strcpy(list[count++],cur);
	i=0;
	break;
   case '#':
   case ';':
   case '(':
   case ')':
   case '{':
   case '}':
   case '<':
   case '>':
   case ',':
	cur[i]='\0';
	if(i!=0)
	 strcpy(list[count++],cur);
	i=0;
	cur[i++]=ch;
	cur[i]='\0';
	if(i!=0)
	 strcpy(list[count++],cur);
	i=0;
	break;
   case '=':
   case '+':
   case '-':
   case '*':
   case '/':
	cur[i]='\0';
	if(i!=0)
	 strcpy(list[count++],cur);
	i=0;
	cur[i++]=ch;
	cur[i]='\0';
	if(i!=0)
	 strcpy(list[count++],cur);
	i=0;
	break;
   default:
	cur[i++]=ch;
  }
 }while(!feof(file));

 printf("\n\n\nPress any key to continue.");
 getch();
 clrscr();
 gotoxy(5,5);
 puts("Header Files");
 gotoxy(20,5);
 puts("Keywords");
 gotoxy(35,5);
 puts("Operators");
 gotoxy(50,5);
 puts("Punctuation");
 gotoxy(65,5);
 puts("Identifiers");

 for(i=0;i<count;i++)
 {
  for(j=0;j<header;j++)
  {
   if(strcmp(list[i],head[j])==0)
   {
    value=1;
    break;
   }
  }
  for(j=0;j<key;j++)
  {
   if(strcmp(list[i],keyw[j])==0)
   {
    value=2;
    break;
   }
  }
  for(j=0;j<op;j++)
  {
   if(strcmp(list[i],oper[j])==0)
   {
    value=3;
    break;
   }
  }
  for(j=0;j<pun;j++)
  {
   if(strcmp(list[i],punc[j])==0)
   {
    value=4;
    break;
   }
  }
  switch(value)
  {
   case 1:
	gotoxy(5,d_head);
	puts(list[i]);
	value=0;
	d_head++;
	break;
   case 2:
	gotoxy(20,d_key);
	puts(list[i]);
	value=0;
	d_key++;
	break;
   case 3:
	gotoxy(35,d_oper);
	puts(list[i]);
	value=0;
	d_oper++;
	break;
   case 4:
	gotoxy(50,d_punc);
	puts(list[i]);
	value=0;
	d_punc++;
	break;
   default:
	gotoxy(65,d_iden);
	puts(list[i]);
	d_iden++;
  }
 }
 fclose(file);
 getch();
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/