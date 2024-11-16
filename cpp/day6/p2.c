#include<stdio.h>
int main ()
{
	int i, j;
	for(i=1;i<3;i++){
		printf("hi\n");
		for(j=1;j<3;j++){
			printf("hello\n");
			if(i==2 && j==2)
			break;
			printf("%d , %d",i,j);
		}
	 	
	}
	printf("bye\n");
	  
	return 0;
	
	
	
}
