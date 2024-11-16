#include<stdio.h>
int main (){
	int arr[5],brr[5],i,j,visited=-1,count;
	printf("Enter a array\n");
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
     }
	for(i=0;i<5;i++){
	 count=1;
		for(j=i+1;j<5;j++){
		if(arr[i]==arr[j]){
		    count++;
		    brr[j]=visited;
		  }
	    }
	    if(brr[i]!=visited)
	     brr[i]=count;
    }
    for(i=0;i<5;i++){
    	if(brr[i]!=visited){
     printf("element freq  %d || %d \n",arr[i],brr[i]);
      }
     }
	return 0;	
}
