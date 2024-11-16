#include<stdio.h>
#include<math.h>
int main ()
{
	int x1,x2,y1,y2;
	float d;
	printf("input x1");
	scanf("%d\n",&x1);
	printf("input y1");
	scanf("%d\n",&y1);
	printf("input x2");
	scanf("%d\n",&x2);
	printf("input y2");
	scanf("%d\n",&y2);
	d= ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

	printf(" Distance =  %f ",sqrt(d));
	return 0;
	
}
