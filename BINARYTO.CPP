
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int num,rem,i=0,sum=0;
 clrscr();
 printf("Enter the number:\n");
 scanf("%d",&num);
 while(num>0)
 {
  rem=num%10;
  printf("rem:%d\n",rem);
  sum=sum+(rem*pow(2,i));
  printf("sum:%d\n",sum);
  i++;
  num=num/10;
 }
  printf("the decimalnumber is=%d",sum);
 getch();
}