/*                                Program No. :
Aim : WAP to search an element in an array of integer, character or floating
      point number through a single function using a function template with
      multiple arguments.
*/
#include<iostream.h>
#include<conio.h>
#define max 5
template <class typea,class typeb>
typeb search(typea *array,typea value,typeb size)
{
 for(typeb i=0;i<size;i++)
  {
   if(array[i]==value)
    return(i+1);
  }
 return(0);
}
void main()
{
 int narr[max],n,i,choice1,size,pos;
 float farr[max],f;
 char carr[max],c,choice2;
 do
  {
   clrscr();
   cout<<"\n\n\t\t\t\tMENU"
       <<"\n\n\t1. Search Integer Array"
       <<"\n\t2. Search Float Array"
       <<"\n\t3. Search Character Array"
       <<"\n\t4. Exit";
   cout<<"\n\n\tEnter your choice (1-4) : ";
   cin>>choice1;
   switch(choice1)
    {
     case 1:cout<<"\n\n\t\tEnter the size of array (<5) : ";
	    cin>>size;
	    if(size>=max)
	     {
	      cout<<"\n\n\t\tSize of array exceeds the maximum size"
		  <<"\n\t\tPress any key to continue";
	      choice2='y';
	     }
	    else
	     {
	      cout<<"\n\n\t\tEnter the elements of the array\n";
	      for(i=0;i<size;i++)
	       {
		cout<<"\t\t\t\t: ";
		cin>>narr[i];
	       }
	      cout<<"\n\n\t\tEnter the element to be searched : ";
	      cin>>n;
	      pos=search(narr,n,size);
	      if(pos==0)
	       cout<<"\n\n\tThe element "<<n<<" doesn't exist in the array";
	      else
	       cout<<"\n\n\tThe element "<<n
		   <<" is present at the position "<<pos<<" in the array";
	     }
	    cout<<"\n\n\t\tWant to continue (y/n) : ";
	    cin>>choice2;
	    break;
     case 2:cout<<"\n\n\t\tEnter the size of array (<5) : ";
	    cin>>size;
	    if(size>=max)
	     {
	      cout<<"\n\n\t\tSize of array exceeds the maximum size"
		  <<"\n\t\tPress any key to continue";
	      choice2='y';
	     }
	    else
	     {
	      cout<<"\n\n\t\tEnter the elements of the array\n";
	      for(i=0;i<size;i++)
	       {
		cout<<"\t\t\t\t: ";
		cin>>farr[i];
	       }
	      cout<<"\n\n\t\tEnter the element to be searched : ";
	      cin>>f;
	      pos=search(farr,f,size);
	      if(pos==0)
	       cout<<"\n\n\tThe element "<<f<<" doesn't exist in the array";
	      else
	       cout<<"\n\n\tThe element "<<f
		   <<" is present at the position "<<pos<<" in the array";
	     }
	    cout<<"\n\n\t\tWant to continue (y/n) : ";
	    cin>>choice2;
	    break;
     case 3:cout<<"\n\n\t\tEnter the size of array (<5) : ";
	    cin>>size;
	    if(size>=max)
	     {
	      cout<<"\n\n\t\tSize of array exceeds the maximum size"
		  <<"\n\t\tPress any key to continue";
	      choice2='y';
	     }
	    else
	     {
	      cout<<"\n\n\t\tEnter the elements of the array\n";
	      for(i=0;i<size;i++)
	       {
		cout<<"\t\t\t\t: ";
		cin>>carr[i];
	       }
	      cout<<"\n\n\t\tEnter the element to be searched : ";
	      cin>>c;
	      pos=search(carr,c,size);
	      if(pos==0)
	       cout<<"\n\n\tThe element "<<c<<" doesn't exist in the array";
	      else
	       cout<<"\n\n\tThe element "<<c
		   <<" is present at the position "<<pos<<" in the array";
	     }
	    cout<<"\n\n\t\tWant to continue (y/n) : ";
	    cin>>choice2;
	    break;
     case 4:break;
     default:cout<<"\n\n\t\tIncorrect Choice"
		 <<"\n\t\tPress any key to continue";
	     choice2='y';
    }
  }while(choice2=='y'||choice2=='Y');
 getch();
}
/*
Name : Rohit Aggarwal
Roll No. : 7CS-097
*/