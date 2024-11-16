#include<stdio.h>
int main(){
	int i,arr[100],count=0;
	printf("enter numbers\n");
	for(i=0;i<5;i++){
			scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(arr[i]<0){
			count++;
		}
	}	
	printf("\n%d",count);	
	return 0;	
}
