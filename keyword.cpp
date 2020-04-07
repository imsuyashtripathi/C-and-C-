#include<stdio.h>
int main()
{
	char data[10];
	scanf("%s",&data);
	printf("%s\n",data);
	if(data=="break"||data=="defer"||data=="for"||data=="while"||data=="struct"||data=="else"||data=="if")
	{
		printf("%s is a keyword",data);
	}
	else
	{
		printf("%s is not keyword",data);
	}
	return 0;
}
