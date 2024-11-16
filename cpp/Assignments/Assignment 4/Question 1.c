#include<stdio.h>
int main ()
{
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	if(n<0)
	 printf("negative");
	else if (n>0) 
	 printf("postive");
	else 
	   printf("zero");
	return 0;
	
}
