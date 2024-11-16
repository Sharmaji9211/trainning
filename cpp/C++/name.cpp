#include<iostream>
using namespace std;
class Logic
{
	public:
		int x,y,z;
		 void input();
		 void process();
		 void output();
};
int main(){
	Logic obj;
	obj.input();
	obj.process();
	obj.output();
}
void Logic::input()
{
	cin>>x>>y;
}
void Logic::process()
{
	z=x+y;
}
void Logic::output()
{
	cout<<z;
}
