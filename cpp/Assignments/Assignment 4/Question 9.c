#include<stdio.h>
int main ()
{
	int unit ;
	float charges,sur_charges,total;
	printf("Enter the electricity unit\n");
	scanf("%d",&unit);
	if(unit<=50)
	{
		charges=(unit*.50); 	
	}
	else if (unit>50&&unit<=150)
	{
		charges=25+((unit-50)*.75);	    
	}
	else if (unit>150&&unit<=250){
		 charges=100+((unit-150)*1.20);	    
	}
    else {
    	charges=220+((unit-250)*1.75);	    
	}	
	sur_charges=charges*.20;
	total =charges+sur_charges;
	printf("Electricity bill =%0.2f",total);
	return 0;
}
