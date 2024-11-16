#include<stdio.h>
int main(){
	int i,arr[5];
	printf("enter numbers\n");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
	if(arr[i]<0)
	printf("\n%d",arr[i]);	
	return 0;	
}
