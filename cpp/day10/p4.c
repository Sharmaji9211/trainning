#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	char b='A';
	char *p=&b;
	printf("value of a %d value of b=%c\n",a,b);
	printf("value of a %d value of b=%c\n",*ptr,*p);
	printf("Address of a %d Address of b=%c\n",&a,&b);
	printf("address of a %d Address of b=%c\n",ptr,p);
	ptr++;
	p++;
	printf("New Address of a %d New Address of b=%c",ptr,p);
	return 0;
	
}
