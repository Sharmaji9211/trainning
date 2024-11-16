#include<stdio.h>
int main ()
{
	int a;
	printf("Enter a number ");
	scanf("%d",&a);
	if(a<0){
		a= (-1)*a;
		printf("a= %d",a);
	}
	else 
	printf(" a = %d",a);
	return 0;
	
}
