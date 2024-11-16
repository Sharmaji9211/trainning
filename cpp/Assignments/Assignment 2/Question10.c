#include<stdio.h>
int main ()
{
	int p,r,t;
	float SI;
	printf("Enter principle amount  ");
	scanf("%d",&p);
	printf("Enter Rate ");
	scanf("%d",&r);
	printf("Enter Time ");
	scanf("%d",&t);
	SI= (p*r*t)/100;
	printf("S.I = %f ",SI);
	return 0;
	
}
