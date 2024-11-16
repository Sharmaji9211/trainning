#include<stdio.h>
int main (){
	
	int a1,a2,i,hcF;
	printf("enter numbers \n");
	scanf("%d%d",&a1,&a2);
	for(i=1;i<a1*a2;++i)
	{
		if(a1%i==0 && a2%i==0)
		hcF=i;
	}
	printf("HcF = %d ",hcF);
	
	return 0;
}
