#include<iostream>
using namespace std;
fun(){
	cout<<"global";
}
class logic1{
	public:
	void fun()
	{
		cout<<"logic1 fun";
	}
};
class logic2{
	public:
	void fun(){
		cout<<"logic2 fun";
	}
};
int main(){
	logic1 obj;
	logic2 obj1;
	fun();
	obj.fun();
	obj1.fun();
}
