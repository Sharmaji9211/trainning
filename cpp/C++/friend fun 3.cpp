#include<iostream>
using namespace std;
class logic1 {
	private:
		int data1;
    public:
    	void set(){
    		cin>>data1;
		}
	void fun();	
};
class logic2 {
	private:
		int data2;
    public:
    	void set(){
    		cin>>data2;
		}
	friend void logic1::fun();	
};
void logic1::fun(){
	logic2 obj1;
	data1=10;
	obj1.set();
	cout<<data1+obj1.data2<<endl;
}
int main (){
	logic1 obj();
	obj.fun();
	return 0;
}
