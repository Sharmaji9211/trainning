#include<stdio.h>
int main ()
{
	int a,b;
	char op;
	printf("enter the number\n");
	scanf("%d %d",&a,&b);
	printf("enter the op. +,-,*,/");
	scanf(" %c",&op);
	switch(op){
		case '+' :
			printf("%d",a+b);
			break;
	    case '-':
			printf("%d",a-b);
			break;
	    case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
	    default:
		 printf("invalid");						
	}
	return 0;
}
