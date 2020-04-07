#include<stdio.h>
int main()
{
	int num,rem,arr[20],i=0,j;
	printf("Enter the decimal number:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%16;
		if(rem<10){
			arr[i]=rem+48;
			i++;
		}
		else
		{
			arr[i]=rem+55;
			i++;
		}
		num=num/16;
	}
	printf("the hexadecimal of decimal:\n");
	for(j=i-1;j>=0;j--)
	{
		printf("%c",arr[j]);
	}
}
