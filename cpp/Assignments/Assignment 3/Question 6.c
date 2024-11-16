#include<stdio.h>
int main ()
{
	int a =5;
	int b =6;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swaped no.  %d , %d",a ,b);
	return 0;
	
}
