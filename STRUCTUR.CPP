#include<iostream.h>
#include<conio.h>
struct book
{
 int bookid;
 char title[20];
 float price;
};
void main()
{
 clrscr();
 book b1={100,"C++ by suyash tripathi",450.0};
 book b2,b3;
 strcpy(b2.title,"C++ made easy");
 b2.price=300.0;
 b3=b2;
 cout<<b1.bookid<<b1.title<<b1.price;
 getch();
}