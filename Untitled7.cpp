#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("enter the string:");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("the string is palindrome");
	}
	else
	{
		printf("the string is not palindrome");
	}
}
