#include<stdio.h>
#include<conio.h>
int main(){
	int arr[10]={3,2,1,4},i;
	for(i=0;i<4;i++){
		printf(" %d",arr[i]);
	}printf("\nthe reverse is:\n");
    for(i=3;i>=0;i--){
    	
		printf("%d",arr[i]);
	}  
	getch();
}     
