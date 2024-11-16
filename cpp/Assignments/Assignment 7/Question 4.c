#include<stdio.h>
int main (){
	int num,rem,i,rev=0;
	printf("enter a number : ");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
      	rem=num%10;
      	rev = (rev*10)+rem;
	    num=num/10;
	}
	for(i=0;i<=rev;i++){
    	rem=rev%10;
	    rev=rev/10;
	switch(rem){
		case 0:
			printf(" zero ");
			break;
		case 1:
			printf(" one ");
			break;
		case 2:
			printf(" Two ");
			break;
		case 3:
			printf(" Three ");
			break;
		case 4:
			printf(" Four ");
			break;
		case 5:
			printf(" Five ");
			break;
		case 6:
			printf(" six ");
			break;
		case 7:
			printf(" seven ");
			break;
		case 8:
			printf(" Eight ");
			break;
		case 9:
			printf(" Nine ");
			break;
									
	}
}
}
