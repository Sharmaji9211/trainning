#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
		}
		A(int x,int y)
		{
			a=x;
			b=y;
		}
		void get(){
			cout<<"a ="<<a<<endl;
			cout<<"b ="<<b<<endl;
		}
		A operator +(A &temp){
			A res;
			res.a=this->a+temp.a;
			res.b=this->b+temp.b;
			return res;
		}
		
};
int main (){
	A obj1(40,80);
	A obj2(100,90);
	A ob3;
	obj1.get();
	obj2.get();
	ob3=obj1+obj2;
	ob3.get();
	}
