#include<iostream>
using namespace std;
class shape{
	public:
		float width,height;
    shape(){
    	cin>>width;
    	cin>>height;
	}	
};
class triangle:public shape
{   
    public:
	void area(){
		cout<<(0.5)*(width*height)<<endl;
	}
};
class rectangle:public shape
{
	public:
	void area(){
		cout<<width*height<<endl;
	}
};
int main(){
	triangle obj;
	rectangle obj1;
	obj.area();
	obj1.area();
}
