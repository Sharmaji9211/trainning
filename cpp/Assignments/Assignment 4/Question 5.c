#include<stdio.h>
int main ()
{
	int m;
	printf("Enter Month num\n ");
	scanf("%d",&m);
	if(m==1&&m==3&&m==5&&m==7&&m==9&&m==11&&m==12)
	printf("31days");
	else if (m==4&&m==6&&m==8&&m==10)
	printf("30days");
	return 0;
	
}
