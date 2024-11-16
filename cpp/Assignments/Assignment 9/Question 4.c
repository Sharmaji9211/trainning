#include<stdio.h>
int main (){
	int i,min,max,size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter a array\n");
	for(i=0;i<size;i++)
	    scanf("%d",&arr[i]);
	min=arr[0];
	max=arr[0];
	for(i=0;i<size;i++){
     if(arr[i]>max)
     max=arr[i];
      if(arr[i]<min)
     min=arr[i];
    }
     printf("Min %d\n",min);
     printf("Max %d",max);
	return 0;	
}
