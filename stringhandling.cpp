#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int length;
	printf("Enter the string:");
	gets(a);
	length=strlen(a);
	printf("Hello :%s\n",a);
	printf("the length of the string is:%d",length);
	return 0;
}
