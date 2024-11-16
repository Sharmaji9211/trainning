#include<iostream>
using namespace std;
template<typename T>
T chintu (T a,T b){
	return (a>b)?a:b;
}
int main(){
	int i=10,j=20;
	cout<<chintu(i,j)<<endl;
	float a=10.5f,b=20.5f;
	cout<<chintu(a,b)<<endl;
	char ch='A',dh='B';
	cout<<chintu(ch,dh)<<endl;
	return 0;
}

