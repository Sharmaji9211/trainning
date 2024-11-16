#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int fact, i=1,p,a,c,num;
	while(1)
	{
		printf("choose case \ncase 1 : factorial \ncase 2: prime or not \ncase 3: even or odd\ncase 4: exit\n");
        scanf("%d",&c);
        
	}
	
    switch(c)
    {
    	case 1:
    		printf("enter any number\n");
	    scanf("%d",&a);
    		for(i=1;i<=a;i++)
    		num=num*i;
    		printf("factorial = %d",num);
    		break;
    	case 2:
    		printf("enter any number\n");
	    scanf("%d",&a);
		    if(a==0||a==1)
		    printf("");
		    for(i=2;) 
		    
	    case 3:
	    	printf("enter any number\n");
	    scanf("%d",&a);
	        if(a%2==0)
			printf("even");
			else
			printf("Odd");
			break;
		case 4:
		    exit(1);				
	}
	
	return 0;	
}
