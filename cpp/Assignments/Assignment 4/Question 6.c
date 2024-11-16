#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter the side of triangle\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c==180)
	 printf("valid triangle");
	else 
	printf("invalid");
	return 0;
	
}
