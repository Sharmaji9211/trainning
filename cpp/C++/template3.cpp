#include<iostream>
using namespace std;
template<class T>
T chintu (T a,T b){
	return (a-b);
}
int main(){
	
	cout<<chintu(10,20)<<endl;
	cout<<chintu(10.5f,20.5f)<<endl;
	cout<<chintu('D','A')<<endl;
	return 0;
}

