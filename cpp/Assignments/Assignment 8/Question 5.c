#include<stdio.h>
int main ()
{
	int n,m,pro=1;
	printf("enter no.\n");
	scanf("%d",&n);
	while(n!=0){
		m=n%10;
		pro=pro*m;	
		n=n/10;	
	}
	printf("%d",pro);
	
	return 0;
	
}
