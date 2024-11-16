#include<stdio.h>
#define AND &&
#define NUM if(c>=48 AND c<57)
#define NUMBER printf("this is NUMBER");
#define LOW if(c>=97 AND c<=122)
#define LOWER printf("this is lower case");
#define UP if(c>=65 AND c<=90)
#define UPPER printf("this is Upper case");
int main ()
{

	char c;
	scanf(" %c",&c);
	NUM 
	    NUMBER 
	LOW
	    LOWER
	UP
	    UPPER;
	return 0;   
}
