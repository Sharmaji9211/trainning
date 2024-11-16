#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float percentage,total;
	printf("input the five marks of subject\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	total=(a+b+c+d+e);
	percentage=(total/500)*100;
	printf("percentage %f",percentage);
	if(percentage>=90)
	{
		printf("Grade A");
	}
	else if(percentage>=80)
	{
		printf("Grade B");
	}
    else if(percentage>=70)
	{
		printf("Grade C");
	}
	else if(percentage>=60)
	{
		printf("Grade D");
	}
	else if(percentage>=40)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade E");
	}
	return 0;
	
}
