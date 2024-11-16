#include<stdio.h>
#include"add.c"
#include"sub.c"
#include"mul.c"
#include"div.c"
//void add(void);
//void sub (int,int);
//int mul (void);
//int div(int ,int);
int main(){
	int a;
	int b;
	char ch;
	printf("Enter the a\n");
	scanf("%d",&a);
	printf("Enter the b\n");
	scanf("%d",&b);
	printf("enter your choice +,-,/,* \n");
	scanf(" %c",&ch);
	switch(ch){
		case '+':
			   add();
			   break;
		case '-':
			   sub(a,b);
			   break;
		case '*':
			   mul(a,b);
			   break;
		case '/':
			   div(a,b);
			   break;	   	   	   
	}
	return 0;
	
}
