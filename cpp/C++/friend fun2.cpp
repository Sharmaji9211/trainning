#include<iostream>
using namespace std;
class logic1 {
	private:
		int data1;
    public:
    	void set(){
    		cin>>data1;
		}
	friend void global_fun();	
};
class logic2 {
	private:
		int data2;
    public:
    	void set(){
    		cin>>data2;
		}
	friend void global_fun();	
};
void global_fun(){
	logic1 obj1;
	logic2 obj2;
	obj1.set();
	obj2.set();
	cout<<obj1.data1+obj2.data2<<endl;
}
int main (){
	global_fun();
	return 0;
}
