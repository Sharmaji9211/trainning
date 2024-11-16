#include<iostream>
using namespace std;
void swap(int &a,int &b);
void swap1(int *c, int *d);
int main(){
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	cout<<"before swap"<<a<<" "<<b<<endl;
	cout<<"before swap"<<c<<" "<<d<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	swap1(&c,&d);
	cout<<c<<" "<<d;
}
 void swap(int &a, int &b )
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swap1(int *c, int *d )
{
    int *temp2;
	temp2 =c;
	c=d;
	d=temp2;
}
