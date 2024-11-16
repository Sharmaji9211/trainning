#include<stdio.h>
int main ()
{
	int a=10;
	int *ptr=&a;
	int **ptr1=&ptr;
	int ***ptr2=&ptr1;
	printf("%d %d %d  %d\n",a,*ptr,**ptr1,***ptr2);
	printf("%d %d %d \n",ptr,ptr1,ptr2);
	printf("%d %d  \n",ptr1,*ptr2);
	return 0;
}
