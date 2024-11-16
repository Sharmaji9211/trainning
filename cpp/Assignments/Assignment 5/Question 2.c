#include<stdio.h>
int main ()
{
	int  choice;
	printf("Enter the  number Months Name\n");
	scanf(" %d",&choice);
	switch(choice){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days\n");
			break;
		case 4:
		case 6:
		case 9:
	    case 11:
		     printf("30 days");
			 break;
	    case 2:
		    printf("28 or 29 days ");
		    break;
		default:
		    printf("invalid");		 		
			
		
	}
	return 0;
	
}
