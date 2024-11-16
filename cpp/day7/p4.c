#include<stdio.h>
int main ()
{ 
  int n;
  int count=1;
  printf("enter a number \n");
  scanf("%d",&n);
  table:
  	  if(count<=10){
  	  		printf("%d %d IS  %d",n,count,n*count);
		count++;
  	goto table;
  	
}
	
  return 0;
  	
}
