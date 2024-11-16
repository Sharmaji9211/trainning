#include<stdio.h>
int main ()
{
	char ch;
	printf("enter a charater ");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
     	printf("UPPER CASE");
    else if(ch>=97&&ch<=122) 
	    printf("LOWER CASE");	
	
	return 0;
	
}
