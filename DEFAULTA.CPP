#include<iostream.h>
#include<conio.h>
int add(int,int);
void main()
{
 clrscr();
 int a,b;
 cout<<"Enter the two numbers:"<<endl;
 cin>>a>>b;
 cout<<"sum is :"<<add(a,b);
 getch();
}
int add(int x,int y)
{
 return(x+y);
}