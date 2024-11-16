#include<stdio.h>
int main()
{
	char ch;
	int a,b,c;
	printf("enter a \n");
	scanf("%d",&a);
	printf("enter b \n");
	scanf("%d",&b);
	
	printf("Enter any operator (+,-,*,/):-\n");
	fflush(stdin);
	scanf("%c",&ch);
	
	switch(ch)
	{
	case '+':
	    c=a+b;
	    printf("c= %d",c);
	    break;
	case '-': 
	    c=a-b;
	    printf("c= %d",c);
	    break;
    case '*': 
	    c=a*b;
	    printf("c= %d",c);
	    break;
	case '/': 
	    c=a/b;
	    printf("c= %d",c);
	    break;
    default:
	     printf("enter valid case");
	}
						    
	return 0;
	
}
