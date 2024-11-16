#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	int A;
	float p,T;
	printf("Enter marks of five subjects :");
	scanf("%d  %d  %d  %d  %d",&sub1,&sub2,&sub3,&sub4,&sub5);
	T= sub1+sub2+sub3+sub4+sub5;
	A = T/5;
	p= (T/500)*100;
	printf("Total = %0.1f \n",T);
	printf("Average = %d\n",A);
	printf("Percentage = %0.2f",p);
	
	
	return 0;
	
}
