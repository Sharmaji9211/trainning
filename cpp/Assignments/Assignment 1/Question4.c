#include<stdio.h>
#define Pi 3.14
int main()
{
	float r;
	float v;
	
	printf("Input the radius of the sphere:");
	scanf("%f",&r);
	v=((1.333)*Pi*r*r*r);
	printf("The volume of sphere is %f ",v);
	return 0;
}
