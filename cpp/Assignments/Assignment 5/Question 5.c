#include<stdio.h>
int main () {
   
	int a;
	int check;
	printf("enter number\n");
	scanf("%d",&a);
	printf("Enter the case \n");
	scanf("%d",&check);
    switch(check){
     	case 1:
     		if(a%2==0)
     		  printf("%d is even",a);
     		else
			   printf ("%d is odd",a); 			   
     		break;
	    default :
	    	  printf("invalid ");
	}
	return 0;	
}

