#include<stdio.h>
int main(){
	int f,l,no,n,temp,sum=0,count=1,c;
	printf("enter no.\n");
	scanf("%d",&n);
	no=n;
    l=n%10;
    while(no>10){
		no=no/10;
	}
	printf("first %d\n",no);
	printf("last %d\n",l);
    n=n/10;
    while(n>10){
    	c=n%10;
    	n=n/10;
    	sum=sum+(c*count*10);
    	count=count*10;
	}
	sum=sum+(l*count*10)+no;
	printf("%d",sum);
	return 0;	
}
