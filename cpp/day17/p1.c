#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("factorial = %d ",fact(num));
	return 0;
}
int fact(int num){	
	if(num==0)
	return 1;
	else if(num==1)
	return 1;
	else 
	{  
		return num*fact(num-1);;
	}
	
}
