#include<stdio.h>
int main ()
{
	int p,q;
	printf("enter the lower limit\n");
	scanf("%d",&p);
	printf("enter the upper limit\n");
	scanf("%d",&q);
	for(;p<=q;p++){
		if(p%1==0&&p%2!=0)
	    printf("%d\n",p);
	}
	  
	return 0;
	
}
