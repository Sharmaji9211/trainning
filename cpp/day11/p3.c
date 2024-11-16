//exchange odd postion to even
#include<stdio.h>
int main()
{
	int i,j,s=0,arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i=i+2){
		s=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=s;
     }
     for(j=0;j<10;j++){
     	printf("%d ",arr[j]);
	 }
	return 0;
	
}
