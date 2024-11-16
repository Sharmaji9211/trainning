#include<stdio.h>
int main ()
{
	int i,n,no,rem;
	static int arr[10];
	printf("enter a num\n");
	scanf("%d",&n);
	no=n;
	while(n!=0){
		rem=n%10;
		n=n/10;
		arr[rem]=arr[rem]+1;
	}
	for(i=0;i<10;i++){
	 if(arr[i]!=0)
	  printf("frequency of %d in %d is %d \n",i,no,arr[i]);
	}
	return 0;	
}
