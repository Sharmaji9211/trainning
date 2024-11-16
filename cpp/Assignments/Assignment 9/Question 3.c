#include<stdio.h>
int main(){
	int i,arr[5],sum=0;
	printf("enter numbers\n");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
	sum=sum+arr[i];
	printf("\n%d",sum);	
	return 0;	
}
