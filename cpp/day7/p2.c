#include<stdio.h>
int main ()
{    
    char c;
	printf("enter any char\n");
	scanf(" %c",&c);
	
	switch(c)
	{
	case 1 :
		if('a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
		 printf("this vowel");
	default:
		printf("consonant");
	      
	}
	return 0;
	
}
