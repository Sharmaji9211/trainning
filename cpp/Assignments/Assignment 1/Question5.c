#include<stdio.h>
int main()
{
	float  kph;
	float mpr;
	printf("Input kilometers per hours :");
	scanf("%f",&kph);
	mpr=kph*0.621371;
	printf("%f miles per hours ",mpr);
	return 0;
}
