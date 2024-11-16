#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*ptr,i;
	printf("enter the n");
	scanf("%d",&n);	
	ptr= (int*)calloc(n,sizeof(n));
	if(ptr==NULL)
	printf("not allocated");
	else
	printf("allocated\n");
	for(i=0;i<n;i++)
	   scanf("%d",&ptr[i]);
	for(i=0;i<n;i++)
	   printf("%d",ptr[i]);
	return 0;
	
}
