#include<conio.h>
#include<iostream.h>
int area(int,int);
float area(int);
void main()
{
 clrscr();
 int r,l,b;
 cout<<"Enter the radius of the circle:"<<endl;
 cin>>r;
 float a=area(r);
 cout<<"the area of the circle is:"<<a<<endl;
 cout<<"Enter the length and breadth of circle:"<<endl;
 cin>>l>>b;
 a=area(l,b);
 cout<<"The area of the rectangle is:"<<a;
 getch();
}
float area(int r)
{
 return(3.14*r*r);
}
int area(int x,int y)
{
 return(x*y);
}
