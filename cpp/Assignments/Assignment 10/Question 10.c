#include<stdio.h>
int main (){
	int arr[10],crr[10],i,l,j=0,k=0,temp,brr[10];
	printf("Enter a array\n");
	for(i=0;i<5;i++)
	    scanf("%d",&arr[i]);
	for(i=0;i<5;i++){
	if(arr[i]%2==0){
	 brr[j]=arr[i];
	 j++;
     }
	else{
	  crr[k]=arr[i]; 
	  k++;  
     }  
    }
    for(i=0;i<j;i++)
     printf(" %d ",brr[i]);
     printf("\n");
     for(i=0;i<k;i++)
     printf(" %d ",crr[i]);
    printf("\n");
     
	for(i=0;i<j;i++){
		for(l=i+1;l<j;l++){
		if (brr[i]>brr[l]){
		    temp=brr[i];
		    brr[i]=brr[l];
		    brr[l]=temp;
		}
	    }
	    printf(" %d ",brr[i]);
    }
       printf("\n");
    for(i=0;i<k;i++){
		for(l=i+1;l<k;l++){
		if (crr[i]>crr[l]){
		    temp=crr[i];
		    crr[i]=crr[l];
		    crr[l]=temp;
		}
	    }
	    printf(" %d ",crr[i]);
    }
    
	return 0;	
}