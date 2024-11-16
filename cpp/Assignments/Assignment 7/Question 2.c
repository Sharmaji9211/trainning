#include<stdio.h>
int main (){
	int rem,rev=0,num,orignal;
	printf("enter num\n");
	scanf("%d",&num);
	orignal=num;
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(orignal==rev)
		printf("palindrome");
	else 
	   printf("not palindrome");
	return 0;
	
}
