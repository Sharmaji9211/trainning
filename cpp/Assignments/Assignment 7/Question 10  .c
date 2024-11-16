#include<stdio.h>
int main (){
	
	int a1,a2,i,lcm;
	printf("enter numbers \n");
	scanf("%d%d",&a1,&a2);
	for(i=1;i<a1*a2;i++)
	{
		if(i%a1==0 && i%a2==0)
		lcm=i;
	}
	printf("Lcm = %d ",lcm);
	
	return 0;
}
