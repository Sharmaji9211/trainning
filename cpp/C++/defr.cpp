#include<iostream>
using namespace std;
int main (){
	int a=10;
	cout<<sizeof(a);
	auto b=40.5;
	auto c=10.f;
	cout<<sizeof(b)<<" "<<sizeof(c);
	return 0;
}
