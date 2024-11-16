#include<stdio.h>
int main (){
	
	int i,arr[5]={10,20,30,40,50};
	int(*ptr)[5];
	int*p=&arr[0];
	ptr=&arr;
	printf("%u %u \n",p,**ptr);
	printf("%u %u \n",*ptr,*ptr);
	for(i=0;i<5;i++){
		
		printf("%d %d %d \n",(*ptr+i),*(*ptr+i),(*ptr)[i]);
	}
	return 0;
	
}
