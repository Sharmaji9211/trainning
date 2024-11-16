#include<stdio.h>
int main(){
	int no,n,sum=0,m;
	printf("enter no.\n");
	scanf("%d",&n);
    no=n;
	while(no>0){
		m=no%10;
		sum=sum+(m*m*m);
		no=no/10;
	}
	if(n==sum)
	printf("Armstrong");
	else
	printf("Not Armstrong");
	return 0;	
}
