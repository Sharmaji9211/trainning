#include<stdio.h>
int main ()
{
	int i ,a=10;
	int b=20;
	int c=30;
	int *ptr[3];
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
	for(i=0;i<3;i++)
	ptintf("%d %d \n",*ptr[i],*(*(ptr+i)));y
}
