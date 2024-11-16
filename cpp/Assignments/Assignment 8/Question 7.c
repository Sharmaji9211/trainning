#include<stdio.h>
int main ()
{
	int num,i,j,count;
	printf("enter number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		count=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0)
			{
			count++;
			break;
			}
		}
		if(count==0 && i!=1){
			printf("%d ",i);
		}
	}
	return 0;
}
