#include<stdio.h>
int main ()
{
	int n,i,j;
	float sum=0.0f,fact; 
	printf("enter a no \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact= 1.0f;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+(1/fact);		
	}
	 printf("sum= %f",sum);
	return 0;
}
