#include<iostream>
using namespace std;
class Logic{
	public:
		void fun()
		{
			cout<<"shivam sharma"<<"\n";
		}
		void fun2()
		{
			cout<<"shiva"<<endl;
		}
};
class logic1{
	public:
		void log()
		{
		  cout<<"shivam"<<'\n';
		}	  
		void log1()  {
			cout<<"Raj"<<endl;
		}	   
};
int main()
{
	Logic obj;
	logic1 b;
	obj.fun();
	obj.fun2();
	b.log();
	b.log1();
}
