#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[20],i,n,sum=0;
 printf("Enter the number odf elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
   sum=sum+arr[i];
 }
 printf("the Sum of elements is:%d",sum);
 getch();
}