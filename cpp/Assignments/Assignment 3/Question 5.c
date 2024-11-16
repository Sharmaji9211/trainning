#include<stdio.h>
int main ()
{
	char c;
	printf("enter character \n");
	scanf("% c",&c);
	(c>='a'&&c<='z') || (c>='A'&& c<='Z')
	  ?printf("it is alphabet")
	  :printf("not alphabet");
	return 0;
	
}
