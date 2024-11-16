#include<stdio.h>
int main(){
	int f,l,no,n,sum=0;
	printf("enter no.\n");
	scanf("%d",&n);
    l=n%10;
    no=n;
	while(no>=10){
		no=no/10;
	}
	printf("first %d\n",no);
	printf("last %d",l);
	sum=no+l;
	printf("\nsum = %d",sum);
	return 0;	
}
