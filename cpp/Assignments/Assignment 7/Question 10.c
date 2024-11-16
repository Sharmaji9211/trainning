#include<stdio.h>
int main (){
	
	int a1,a2,maximum;
	printf("enter numbers \n");
	scanf("%d%d",&a1,&a2);
	for(maximum=1;maximum<a1*a2;maximum++)
	{
		if(maximum%a1==0 && maximum%a2==0)
		break;
	}
	printf("Lcm = %d ",maximum);
	
	return 0;
}
