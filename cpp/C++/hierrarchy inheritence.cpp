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
class child1:protected papa
{
	private:
		void fun4(){
			cout<<"child1 private\n";
		}
	protected://{fun1},fun2,fun3
		void fun5(){
			cout<<"child1 protected\n";
		}
	public:
		void fun6(){
			fun2();
			fun3();
			fun4();
			fun5();
			cout<<"child1 public\n";
		}
};
class child: public papa
{
	private:
		void fun7(){
			cout<<"child private\n";
		}
	protected:
		void fun8(){
			cout<<"child protected\n";
		}
	public:
		void fun9(){
			fun2();
			fun3();
			fun7();
			fun8();
			cout<<"child public\n";
		}
};
int main(){
	child1 obj1;
	child obj;
	obj1.fun6();
	obj.fun9();
	
	
}
