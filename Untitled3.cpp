#include<stdio.h>
#include<conio.h>
int main(){
	int arr[]={3,2,1,4},i,n;
	n=sizeof(arr)/sizeof(int);
	printf("%d\n",n);
    for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	printf("\n");
    for(i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}  
	getch();
}
