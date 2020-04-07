#include<string.h>
#include<stdio.h>
int main()
{
	char source[20]="hello world";
	char destination[20];
	strcpy(destination,source);
	
	printf("Source string:%s\n",source);
	printf("destination string:%s\n",destination);
}
