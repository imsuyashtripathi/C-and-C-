#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10][10],i,j,n,m,even=0,odd=0;
 clrscr();
 printf("Enter the no. of col and row in matrix:");
 scanf("%d%d",&m,&n);
 printf("Enter the elements of array;");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&arr[i][j]);
   if((arr[i][j]%2)==0)
   {
      even=even+1;
      printf("even\n");
   }
   else
   {
       odd=odd+1;
       printf("odd\n");
   }
  }
 }
 printf("odd=%d \nEven=%d",odd,even);
 getch();
}