#include<iostream>
using namespace std;
class A{
	public:
		int a;
};
class B{
	int b;
	public:
		void logic(B ob2)
		{
			ob2.b=10;
			cout<<ob2.b<<endl;
		}
};
int main (){
	B obj1,obj2;
	obj1.logic(obj2);
	return 0;
}
