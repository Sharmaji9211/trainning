#include<stdio.h>
int main ()
{
	int n;
	char ch;
	printf("Do you want enter a number (yes/no)\n");
	scanf(" %c",&ch);
	
	while(ch=='y')
	{
		printf("Enter a number\n");
	    scanf("%d",&n);
	    printf("Suare = %d",n*n);
	    printf("\nDo you want enter a number again (yes/no)\n");
	    scanf(" %c",&ch);
	}
	return 0;
}
