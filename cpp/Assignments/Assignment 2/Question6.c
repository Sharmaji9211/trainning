#include<stdio.h>
int main (){
	int d,f;
	float A;
	printf("input total distance in km ");
	scanf("%d",&d);
	printf("input total fuel spent in lit ");
	scanf("%d",&f);
	A=d/f;
	printf("Average consumption  %f  " ,A);

	
	return 0;
	
}
