#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y,isleap=0;
clrscr();
printf("Enter date here:\n");
scanf("%d/%d/%d",&d,&m,&y);
if(y%100!=0&&y%4==0 || y%400)
 isleap=1;
 if(y<1800 || y>2050 || m<1 || m>12 || d<1 || d>31)
  goto end;
 else if(m==2)
 {
 if(d==30 || d==31 || (d==29&& !isleap))
   goto end;
 }
 else if(m==4||m==6|| m==9 || m==11)
  if(d==31)
  {
    goto end;
  }
 else
  printf("date is vaild");
 end:
  printf("not a vaild date");
  getch();
}
