#include<stdio.h>
#include<math.h>
int main ()
{
	int p,t;
	float r ,Ci;
	printf("Enter Principle amount");
	scanf("%d",&p);
	printf("Enter Time");
	scanf("%d",&t);
	printf("Enter Rate");
	scanf("%f",&r);
	Ci=p*(pow((1+r/100),t));
	printf("Compound Interest= %f",Ci);
	return 0;
	
}
