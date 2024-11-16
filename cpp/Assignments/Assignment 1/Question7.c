#include<stdio.h>
int main ()
{
	int a,b,c,d;
	printf("Input two anles of tringle by comma:\n");
	scanf("%d,%d",&a,&b);
	d=a+b;
	c=180-d;
	printf("Third angle of thr triangle : %d",c);
	return 0;
	
}
