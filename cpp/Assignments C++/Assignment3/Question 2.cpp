#include<iostream>
using namespace std;
class cal{
	private:
		int a,b,sum1,sub1,multi1,div1;
	public:
	 cal(int a, int b){
		cout<<"num1 and num 2"<<endl;
		this->a=a;
		this->b=b;
	}
	void sum(){
		sum1 =a+b;
		cout<<"sum ="<<sum1;
	}
	void sub(){
		sub1 =a-b;
		cout<<"sub ="<<sub1;
	}
	void multi(){
		multi1 =a*b;
		cout<<"Multi ="<<multi1;
	}
	void div(){
		div1 =a/b;
		cout<<"Div ="<<div1;
	}
};
int main(){
	cal obj(20,10);
	obj.sum();
	obj.sub();
	obj.multi();
	obj.div();
	
}
