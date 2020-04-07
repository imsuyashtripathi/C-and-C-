#include<iostream.h>
#include<conio.h>
int sum(int,int);
void main()
{
 clrscr();
 int a=5,b=6;
 int s=sum(a,b);
 cout<<"the sum is:"<<s;
 getch();
}
int sum(int x,int y)
{
 return(x+y);
}
