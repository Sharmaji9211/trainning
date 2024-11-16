#include<stdio.h>
int main ()
{
	int arr[5],brr[5],crr[10],i;
	printf("enter a array- ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		}
	printf("enter b array- ");
	for(i=0;i<5;i++){
		scanf("%d",&brr[i]);
		}
	for(i=0;i<5;i++)	
	crr[i]=arr[i];
	for(i=0;i<5;i++)	
	crr[i+5]=brr[i];
	printf("C  array- ");
	for(i=0;i<10;i++){
		printf("%d ",crr[i]);
		}	
	return 0;
	
}
