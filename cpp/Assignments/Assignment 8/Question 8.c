#include<stdio.h>
int main ()
{
	int num,i,j,count,sum=0;
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
			sum=sum+i;
		}
	}
	printf("%d\n",sum);
	return 0;
}
