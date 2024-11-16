#include<stdio.h>
#include<calculator.c>
int main()
{
	int a=6;
	int b=2;
	printf("%d\n",add(a,b));
	printf("%d\n",sub(a,b));
	printf("%d\n",mul(a,b));
	printf("%d\n",div(a,b));
	return 0;
}
