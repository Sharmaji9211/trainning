#include<iostream>
using namespace std;
class logic{
	private:
		int x;
	public:
	logic(){
		cout<<"reached con"<<endl;
		x=10;
	}
	~logic(){
		cout<<"reached des";
	}	
	void show(){
		cout<<x<<endl;
	}
};
int main(){
	logic *obj=new logic;
	obj->show();
	delete obj;
}
