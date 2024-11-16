#include<stdio.h>
int main (){
	int i,n;
	printf("enetr a num\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("the factor = %d\n",i);
	}
	return 0;
	
}
