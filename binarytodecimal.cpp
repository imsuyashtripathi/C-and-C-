#include<stdio.h>
#include<math.h>
int main()
{
	int rem,num,sum=0,i=0;
	printf("Enter the binary:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+(rem*pow(2,i));
		i++;
		num=num/10;
	}
	printf("decimal:%d",sum);
	
}

