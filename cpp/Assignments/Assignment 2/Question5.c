#include<stdio.h>
int main ()
{
	float I1,I2,N1,N2,A;
	printf("weight Item1  ");
	scanf("%f",&I1);
	printf("No. of Iten 1:");
	scanf("%f",&N1);
    printf("weight Item2  ");
	scanf("%f",&I2);
	printf("No. of Iten 2:");
	scanf("%f",&N2);
	A=(I1*N1+I2*N2)/(N1+N2);
	printf("Average Value = %f",A);
	
	return 0;
	
}
