#include<stdio.h>
#include<math.h>
int main()
{
	float s,Area ;
	printf("enter side of  the equilateral triangle ;");
	scanf("%f",&s);
	Area=(sqrt(3)/4)*(s*s);
	printf("Area = %f",Area);
	return 0;
	
}
