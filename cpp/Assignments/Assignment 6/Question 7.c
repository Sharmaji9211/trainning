#include<stdio.h>
int main ()
{
	int i=1,sum=0,n;
	printf("enter the value of n -\n");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2==0){
			printf("%d ",i);
		sum=sum+i;
		}
		
		i++;
	}
	printf("sum = %d",sum);
	 return 0;
	
}

