#include<stdio.h>
int main ()
{
	int i,arr[4][2]={{20,30},{40,50},{5,6},{7,7}};
	printf("%d %d %d %d %d %d\n",&arr[0],&arr[1],&arr[3],&arr[4],&arr[0]+1,&arr[0]+2);
	printf("%d %d %d %d %d %d\n",*(*(&arr[0])),*(*(&arr[1])),*(*(&arr[2])),*(*(&arr[3])),*(*(&arr[4])),*(*(&arr[0]+1)),*(*(&arr[0]+2)));
	printf("%d %d %d %d %d %d %d %d\n",*(arr+0),*(arr+1),*(arr+2),*(arr+3),*(arr+4),*(arr+5),*(arr+6),*(arr+7));
	for(i=0;i<8;i++){
		printf("%d ",**(arr+i));
	}
	 
	return 0;
	
}
