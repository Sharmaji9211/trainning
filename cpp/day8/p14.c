#include<stdio.h>

int main(){
	int num;
	int lower_limit,upper_limit;
	printf("enter your lowerlimit and upperlimit");
	scanf(" %d %d ",&lower_limit,&upper_limit);
     	for(int i=lower_limit;i<=upper_limit;i++){
		 
		count =0;
		for(int j=1;j<=num;j++)
		{
			num=num%i;
			count++;
		}
		if(count==2)
		  printf("prime");
		else
		printf("not prime");  
	}
	return 0;
}
