#include<iostream>
using namespace std;
class papa{
	private:
		void fun1(){
			cout<<"papa private\n";
		}
	protected:
		void fun2(){
			cout<<"papa protected\n";
		}
	public:
		void fun3(){
			cout<<"papa public\n";
		}
};
class child: private papa
{
	private://{fun1},fun2,fun3
		void fun4(){
			cout<<"child private\n";
		}
	protected:
		void fun5(){
			cout<<"child protected\n";
		}
	public:
		void fun6(){
			fun2();
			fun3();
			fun4();
			fun5();
			cout<<"child public\n";
		}
};
int main(){
	child obj;
	obj.fun6();
}
