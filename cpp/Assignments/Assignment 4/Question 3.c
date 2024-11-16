#include<stdio.h>
int main ()
{
	char ch;
	printf("enter any charater\n");
	scanf("%c",&ch);
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	printf("this is alphabet");
	else if (ch>=48&&ch<=57)
	 printf("this is number");
	else
	 printf("this is special"); 
	return 0;
	
}
