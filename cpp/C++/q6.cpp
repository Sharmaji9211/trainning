#include<iostream>
using namespace std;
class ADD{
	public:
		int a,b,c;
		void get()
		{
	     cin>>a;
	     cin>>b;
		}
		void sum()
	    {
	    	c=a+b;
		}
		void display()
		{
			cout<<"Result="<<c;
		}
};

int main()
{
	ADD obj1;
	ADD obj2;
	ADD obj3;
	obj1.get();
	obj1.sum();
	obj1.display();
	obj2.get();
	obj2.sum();
	obj2.display();
	obj3.get();
	obj3.sum();
	obj3.display();
}
