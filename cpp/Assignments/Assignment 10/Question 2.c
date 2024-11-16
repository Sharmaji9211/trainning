#include<stdio.h>
int main (){
	int arr[10],i,j,k,n,ctr;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("Enter a array\n");
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);  
	for(i=0;i<n;i++){
		ctr=0;
		for(j=0,k=n;j<k+1;j++){
			if(i != j){
				if(arr[i]==arr[j])
					{
						ctr++;
					}
			}
		}
			if(ctr == 0){
				printf("%d ",arr[i]);
			}
		}
		printf("\n\n");
		return 0;
}
