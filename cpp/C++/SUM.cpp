#include<iostream>
class ADD{
	public:
		void fun()
		{
			int a=5,b=10,c;
			c=a+b;
			std::cout<<"SUM="<<c;
		}
};
int main()
{
	ADD obj;
	obj.fun();
}
