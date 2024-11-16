#include<stdio.h>
int main(){
	 int i,arr[100],temp=0;
	 printf("enter arr elements\n");
	 for(i=0;i<=5;i++){
	 	scanf("%d",&arr[i]);
	 }
	arr[i].sort; 
	 if(arr[i]=NULL)
	  printf("please enter element");
	for(i=0;i<=5;i++)
	 {
	 	if(arr[i]>arr[i+1])
    	temp=arr[i+1];
	   arr[i+1]=arr[i];
	   arr[i]=temp;
	 }
	for(i=0;i<=5;i++)
	 printf("%d",arr[i]);
	return 0;
	
}
