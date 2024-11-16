#include<stdio.h>
int main (){
	int size,i,s,found=0;
	printf("Enter Size of Array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Array\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	printf("Enter Element to search in  Array\n");
	scanf("%d",&s);
	for(i=0;i<size;i++){
		if(arr[i]==s){
			found=1;
			break;
		}
	}
	if(found==1)
	{
	printf("element at index= %d",i);
	}
	
	else
		printf("Not Found");
	return 0;
}
