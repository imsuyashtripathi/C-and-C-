#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]="Hello world";
	printf("uppercase:%s",strupr(a));
	printf("lowercase:%s",strlwr(a));
}
