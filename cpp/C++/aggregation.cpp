#include<iostream>
using namespace std;
class A{
	public:
	int a;
};
class B{
	int b;
	public:
		void fun(){
			A ob;
			cout<<"hi"<<endl;
			ob.a=10;
			b=20;
			cout<<ob.a<<endl;
			cout<<b<<endl;
			
		}
};
int main(){
	B ob;
	ob.fun();
}
