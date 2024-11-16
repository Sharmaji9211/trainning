#include<stdio.h>
int main ()
{

	int a;
	int check;
	printf("enter number\n");
	scanf("%d",&a);
	printf("Enter the case \n");
	scanf("%d",&check);
    switch(check){
     	case 1:
     		if(a>0)
     		  printf("%d is positive",a);
     		else if (a<0)
			   printf ("%d is negative",a); 
			else
			  printf(" %d is zero",a);   			   
     		break;
	    default :
	    	  printf("invalid ");
	}
	return 0;	
}

