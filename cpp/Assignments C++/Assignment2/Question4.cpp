#include<iostream>
using namespace std;
class Area{
	int r;
    public:
    	void area()
    	{
    		cin>>r;
    		cout<<"Area ="<<(3.14*r*r)<<endl;
		}
};
int main(){
	Area obj;
	obj.area();
}
