#include<iostream>
using namespace std;
class logic1{
	private:
		int x;
	void fun1()
	{
		cout<<"private"<<endl;
	}
	protected:
		int y;
	void fun2(){
		cout<<"protected"<<endl;
	}
	public:
		int z;
		fun3(){
			cout<<"public";
		}
	    void newpublic(){
	 	x=10;
		fun1();
		cout<<x<<endl;
	 	y=20;
	 	fun2();
	 	cout<<y<<endl;
	 }	
};
int main(){
	logic1 obj;
	obj.newpublic();
	obj.z=10;
	obj.fun3();
}
