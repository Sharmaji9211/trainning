#include<stdio.h>
struct std{
	int a,b;
};
int main(){
	struct std s={1,2};
	struct std *ptr=&s;
	printf("\n%d %d ",s.a,s.b);
	printf("\n%d %d",ptr->a,ptr->b);
}
