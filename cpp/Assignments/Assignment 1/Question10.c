#include<stdio.h>
int main ()
{
	int s;
	int min,hrs;
	printf("Input seconds:");
	scanf("%d",&s);
	min=s%60;
	hrs=s/3600;
	printf("G:H:S- %d:%d:%d",hrs,min,s);
	return 0;
	
}
