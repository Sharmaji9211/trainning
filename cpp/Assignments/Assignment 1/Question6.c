#include<stdio.h>
int main(){
	int min;
	int hr ;
	printf("Input minutes");
	scanf("%d",&min);
	hr=min/60;
	min=min%60;
	printf("%d hours ,%d min ",hr,min);
	return 0;
}
