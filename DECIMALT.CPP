#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[20],num,i=0,j;
 clrscr();
 printf("enter the number:\n");
 scanf("%d",&num);
 while(num>0)
 {
  arr[i]=num%2;
  num=num/2;
  i++;
 }
 printf("binary:\n");
 for(j=i-1;j>=0;j--)
 {
  printf("%d",arr[j]);
 }
 getch();
}