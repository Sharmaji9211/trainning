#include<stdio.h>
int main()
{
	int arr[4][2]={{1234,56},{1212,33},{1434,80},{1312,78}};
	int i ,j, *pint;
	int(*p)[2];
	for(i=0;i<4;i++)
	{ 
	  p=&arr[i];
	  pint = (int*)p;
	  printf("\n");
	    for(j=0;j<2;j++)
	    	printf("%d ",*(pint+j));
	}
	return 0;
}
