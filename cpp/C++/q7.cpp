#include<iostream>
using namespace std;
class logic {
	public: 
	 int a,b;
	 static int c;
	 
};
int logic::c=10;
int main(){
	logic obj1,obj2;
	cout<<&obj1.a<<endl<<&obj1.b<<endl<<logic::c<<endl;
	cout<<&obj2.a<<endl<<&obj2.b<<endl
	<<obj2.c<<endl;
}
