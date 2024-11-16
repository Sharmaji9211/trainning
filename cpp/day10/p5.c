#include<stdio.h>
int main ()
{
	int a=10,d=20,*ptr,*ptr2;
	*ptr=&a;
	*ptr2=&d;
	char b='A';
	char *p=&b;
	printf("%d %d \n",ptr,p);
	printf("%d %d \n",ptr,p);
	printf("%d %d \n",ptr,p);
	printf("%d %d \n",ptr,p);
	
	return 0;
	
}
