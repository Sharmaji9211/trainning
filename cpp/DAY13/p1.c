#include<stdio.h>
void fun(int arr[] );
int main (){
	int i;
	int arr[5]={11,44,55,88,77};
	//for(i=0;i<5;i++)
		fun(&arr[0],5);
	return 0;
}
 void fun(int arr[], int x){
 			printf("%d",x);
	 }
 
