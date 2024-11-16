#include<stdio.h>
int main ()
{
	int i,j,k;
	int arr[3][2][3]={
		{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}},{{13,14,15},{16,17,18}}
	};
	printf("\n 1d index\n");
	 for(i=0;i<=0;i++){
	 	for(j=0;j<=0;j++){
	 		for(k=0;k<=17;k++)
	 		printf("%d ",arr[i][j][k]);
		 }
	 }
	printf("\n");
	printf("\n 2d index\n");
	  for(i=0;i<=0;i++){
	 	for(j=0;j<6;j++){
	 		for(k=0;k<3;k++)
	 		printf(" %d ",arr[i][j][k]);
	 		printf("\n");
		 }
		 printf("\n");
	 }
	 printf("\n");
	 printf("\n 3d index\n");
	 for(i=0;i<=2;i++){
	 	for(j=0;j<2;j++){
	 		for(k=0;k<3;k++)
	 		printf(" %d ",arr[i][j][k]);
	 		printf("\n");
		 }
		 printf("\n\n");
	 }
	return 0;
}
