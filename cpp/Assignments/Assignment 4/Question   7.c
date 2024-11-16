#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c;
	float r1,r2,D;
	printf("enter the cofi.");
	scanf("%f %f %f" ,&a,&b,&c);
	D=sqrt((b*b)-(4*a*c));
	r1=(-b-D)/(2*a);
	r2=(-b+D)/(2*a);
	printf("%f %f",r1,r2);
	return 0;
}
