#include<iostream>
using namespace std;
class A{
	public:
	int a;
};
class B{
	public:
		void fun(A ob2){
			ob2.a=10;
			
			cout<<ob2.a<<endl;
		}
};
int main(){
	A obj;
	B ob;
	ob.fun(obj);
	return 0;
}
