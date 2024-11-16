#include<stdio.h>
int main ()
{
	int y;
	printf("Enter year \n");
	scanf("%d",&y);
	(y%4==0&&y%100!=0)?printf("leap year"):(y%400==0)?printf("leap year"):printf("not leap year");
	return 0;
	
}
