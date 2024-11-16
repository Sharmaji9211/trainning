#include<stdio.h>
int main()
{
	float c, f ;
	printf("Enter fahrenheit ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Celsius is %0.2f",c);
	return 0;
}
