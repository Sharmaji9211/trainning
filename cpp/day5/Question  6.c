#include<stdio.h>
int main()
{
	int arr[5],i,even=0,odd=0;
	printf("enter arr\n");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<5;i++){
	if(arr[i]%2==0)
	  even++;
	else if (arr[i]%2!=0)
	  odd++;
	}
    printf("%d  %d",even,odd);
	return 0;
}
