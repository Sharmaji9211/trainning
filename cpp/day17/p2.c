#include<stdio.h>
#include<stdlib.h>
int sum(int);
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("sum= %d",sum(num));
	return 0;
}
int sum(int num)
{ 
   int rem,sum;
  if(num!=0)
   {
	while(num!=0)
	{
		rem=num%10;
		return rem+sum(num/10);    
	}
   }
    else 
       return 0;
   		
}
