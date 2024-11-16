#include<stdio.h>
int main ()
{
	
	int c,sub,gm=0;
	printf("enter the class\n ");
	scanf("%d",&c);
	printf("enter the failed sub\n");
	scanf("%d",&sub);
	switch (c)
	{
		case 1:
			if(sub<=3)
			  gm=sub*5;
			break;
		case 2:
			if(sub<=2)
			 gm=sub*4;
			break;
		case 3:
			if(sub<=1)
			 gm=sub*5;
			break;
	}
	printf("student class =%d\n",c);
	printf("Grace marks = %d \n",gm);
	return 0;
	
}
