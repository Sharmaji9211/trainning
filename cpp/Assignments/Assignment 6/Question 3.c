#include<stdio.h>
int main ()
{
	char i;
	printf("enter the value of i \n");
	scanf(" %c",&i);
	while((i>='a') && (i<='z')){
		printf(" %c",i);
		i++;
	}
	return 0;
	
}

