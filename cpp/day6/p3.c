#include<stdio.h>
int main ()
{
	int price,expence;
	int quantity;
	int discount=0;

	printf("Enter the price ");
	scanf("%d",&price);
	printf("enter quantity ");
	scanf("%d",&quantity);
	expence= (price*quantity);
	if(expence>1000)
	{
		discount = (expence*0.1);
		expence=(expence-discount);
		printf("expence= %d ",expence);
	}
	else
	 printf("expence = %d "); 
	return 0;	
}
