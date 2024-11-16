#include<stdio.h>
int main ()
{
	int a,b;
	int max;
	printf("enter number\n");
	scanf("%d %d",&a,&b);
	printf("Enter the case \n");
	scanf("%d",&max);
    switch(max){
     	case 1:
     		if(a>b)
     		  printf("%d is max",a);
     		else
			   printf ("%d is max",b); 			   
     		break;
	    default :
	    	  printf("invalid ");
	}
	return 0;	
}

