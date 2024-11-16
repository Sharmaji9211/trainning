#include<stdio.h>
int main ()
{
	char ch1,ch2,ch3;
	printf("Enter 1 char \n");
	scanf("%c",&ch1);
	printf("Enter 2 char \n");
	scanf("% c",&ch2);
	printf("Enter 3 char \n");
	scanf("% c",&ch3);
	if(ch1==ch2&&ch1==ch3||ch2==ch1&&ch2==ch3||ch3==ch1&&ch3==ch3)
	 printf("equal");
	else 
	 printf("nt equal"); 
	return 0;
}
