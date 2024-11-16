#include<stdio.h>
int main ()
{
	int a;
	printf("Enter the number \n");
	scanf("%d",&a);
	switch(a/10){
		
		case 10:
		case  9:	
			printf("Grade A");
			break;
		case 8:
			printf("Grade B");
			break;	
		case 7:
			printf("Grade C");
			break;
		case 6:
		case 5:
		case 4:
			printf("Grade D");
			break;
		default :
		    printf(" invaild");	
	}
	return 0;
	
}
