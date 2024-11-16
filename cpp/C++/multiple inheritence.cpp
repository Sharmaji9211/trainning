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
class mumma
{
	private:
		void fun4(){
			cout<<"mumma private\n";
		}
	protected:
		void fun5(){
			cout<<"mumma protected\n";
		}
	public:
		void fun6(){
			cout<<"mumma public\n";
		}
};
class child: private papa, public mumma
{
	private://{fun1},fun2,fun3,{fun4}
		void fun7(){
			cout<<"child private\n";
		}
	protected://fun5
		void fun8(){
			cout<<"child protected\n";
		}
	public://fun6
		void fun9(){
			fun2();
			fun3();
			fun5();
			fun7();
			fun8();
			cout<<"child public\n";
		}
};
int main(){
	child obj;
	obj.fun9();
	obj.fun6();
}
