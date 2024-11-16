#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*ptr,i;
	printf("enter the n\n");
	scanf("%d",&n);
	ptr= (int*)calloc(n,sizeof(n));
	if(ptr==NULL)
	printf("not allocated");
	else{
			printf("initail value at location :");
	for(i=0;i<n;i++)
	  printf("\n%d",ptr[i]);
	printf("\nMemory has been succesfully\n");
	for(i=0;i<n;i++)
	  ptr[i]=i+1;
	}
	printf("element is dyanmically allocted memory of %d a :");
	for(i=0;i<n;i++)
	  printf("\n%d",ptr[i]);
	return 0;
}
