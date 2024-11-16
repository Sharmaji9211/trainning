#include<stdio.h>
int main(){
	
	int i,j,arr[10];
	printf("enter a array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(i=10;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
	
}
