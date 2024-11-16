#include<iostream>
using namespace std;
class logic{
	public:
		void fun()
		{
			cout<<"non static"<<endl;
		}
	    static void fun1()
		{
			cout<<"static"<<endl;
		}
};
int main()
{
	logic obj;
	obj.fun();
	obj.fun1();
	logic::fun1();
}
