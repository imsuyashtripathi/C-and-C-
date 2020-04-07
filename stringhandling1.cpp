#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("enter the first string:");
	gets(a);
	printf("\nenter the second string:");
	gets(b);
	if(strcmp(a,b)==0)
	{
		printf("String are equal");
	}
	else
	{
		printf("String are not equal");
	}
}
