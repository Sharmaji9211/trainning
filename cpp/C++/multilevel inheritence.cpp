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
class child: public papa
{
	private://fun1
		void fun4(){
			cout<<"child private\n";
		}
	protected://fun2
		void fun5(){
			cout<<"child protected\n";
		}
	public://fun3
		void fun6(){
			cout<<"child public\n";
		}
};
class child1: private child
{
	private://{fun1,fun4},fun2,fun5,fun3,fun6
		void fun7(){
			cout<<"child1 private\n";
		}
	protected:
		void fun8(){
			cout<<"child2 protected\n";
		}
	public:
		void fun9(){
		    fun2();
		    fun3();
			fun5();
			fun6();
			fun7();
			fun8();
			cout<<"child3 public\n";
		}
};
int main(){
	child1 obj;
	obj.fun9();
}
