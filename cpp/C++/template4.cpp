#include<iostream>
using namespace std;
template<class T,class S,class Z>
void fun(T a,S b,Z c){
	cout<<a<<endl<<b<<endl<<c;
}
int main(){
	int i=1;
	float j=10.5f;
	char ch='A';
	fun(i,j,ch);

	return 0;
}

