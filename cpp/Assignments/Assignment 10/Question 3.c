#include<stdio.h>
int main (){
	
	int arr[10],i,j,count=0;

	printf("Enter a array\n");
	for(i=0;i<5;i++){
		printf("element - %d : ",i);
	scanf("%d",&arr[i]);
}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		if(arr[i]==arr[j])
		  {
		    count++;
		    break;
		  }
		
	    }
    }
     printf("total number of element %d",count);
	return 0;	
}
