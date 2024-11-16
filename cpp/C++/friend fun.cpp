#include<iostream>
using namespace std;
class logic {
	private:
		int data1, data2;
    public:
    	void set(){
    		cin>>data1;
    		cin>>data2;
		}
	friend void global_fun();	
};
void global_fun(){
	int n=10;
	logic obj1;
	obj1.set();
	cout<<obj1.data1+n<<endl;
	cout<<obj1.data2+n<<endl;
}
int main (){
	global_fun();
	return 0;
}
