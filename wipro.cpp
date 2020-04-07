#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],character;
	int i,j,count=1,len;
	printf("enter the string");
	scanf("%s",&str);
	len=strlen(str);
	for(i=0;i<=len;i++){
		for(j=i+1;j<=len;j++){
			if(str[i]==str[j]){
		 		count=0;
				break;
				
			}
			else if(str[i]!=str[j]&&j==len)
			{
				count=1;
				character=str[i];
				goto final;
			}
		}
	}
	
	final: if(count==1){
		printf("the %c letter is not repeated",character);
	}
	else{
		printf("there is no nonrepeating element");
		
	}
	return 0;
}

   

