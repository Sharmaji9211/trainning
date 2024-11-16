#include<iostream>
using namespace std;
class logic{
	public:
		int x,y;
		static int z,k;
	void set(int a, int b){
		x=a;
		y=b;
	}
	void process(){
		cout<<x+y;
	}	
};
int logic::z=10;
int logic::k=20;
int main(){
	logic obj;
	logic obj1, obj2;
	obj1.set(5,6);
	obj1.process;
	obj2.set(6,6);
	obj2.process;
}
