#include<stdio.h>
int main ()
{
	int sal;
	float HRA,DA,Gross;
	printf("Enter salary \n");
	scanf("%d",&sal);
	if (sal<1500)
	{
		HRA = (sal*0.1);
		DA = (sal*.9);
		Gross =(sal+HRA+DA);
		printf("Gross  = %f",Gross);
	}
	else
	{
		HRA =500;
		DA = (sal*.98);
		Gross = (sal+HRA+DA);
		printf("Gross = %f",Gross);
	}
	return 0;
}
