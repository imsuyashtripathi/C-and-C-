#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char a[10],b[10],c[10];
	printf("enter the strings:\n");
	gets(a);
	gets(b);
	gets(c);
	for(i=0;i<strlen(a);i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			a[i]='#';
		}
	}
	for(i=0;i<strlen(b);i++){
		if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
			b[i]='@';
		}
	}
	for(i=0;i<strlen(c);i++){
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
			c[i]='$';
		}
	}
	puts(a);
	puts(b);
	puts(c);
	return 0;
}
