#include<stdio.h>
int main ()
{
	char ch;
	printf("Enter a alphabet\n ");
	scanf(" %c",&ch);
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
		{
			switch(ch){
		case 'a':
	    case 'e':
		case 'i':
		case 'o':
		case 'u':
		     printf("vowel");
	         break;		 		
		default :
		   printf("const");	
	}
		}
	else
		printf("invalidchar");
	
	return 0;
}
