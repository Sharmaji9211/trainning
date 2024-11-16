#include<stdio.h>
int main(){
	int i,j,arr[10];
	printf("enter a array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(i=0;i<10;i++)
	if(arr[i]==arr[5])
	continue;
		printf("%d",arr[i]);
	return 0;	
}
