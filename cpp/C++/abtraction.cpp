//abstraction
#include<iostream>
using namespace std;
class A{
	public:
		void virtual logic1()=0;
		void virtual logic2()=0;
		void logic3(){
			cout<<"logic  3 define\n";
		}
};
class B:public A 
{
	public:
	void logic1(){
			cout<<"logic  1 implemented\n";
		}
};
class C:public B 
{
	public:	
	void logic2(){
			cout<<"logic  2 implemented \n";
		}
};
int main(){
	C obj;
	obj.logic2();
	obj.logic1();
	obj.logic3();
	
}
