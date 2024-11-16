#include<stdio.h>
int main(){
	int f,l,no,n;
	printf("enter no.\n");
	scanf("%d",&n);
    l=n%10;
    no=n;
	while(no>=10){
		no=no/10;
	}
	printf("first %d\n",no);
	printf("last %d",l);
	return 0;	
}
