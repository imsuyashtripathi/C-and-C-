#include<stdio.h>
int main()
{
	int arr[20],i,j,k,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the elemenets of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	  	if(arr[i]==arr[j])
	  	{
	  		for(k=j;k<n;k++)
			  {
			  	arr[k]=arr[k+1];
				   
			  }
			  n--;	 	
			  j--;
		}

	  }
	}
	printf("without duplicate item:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
