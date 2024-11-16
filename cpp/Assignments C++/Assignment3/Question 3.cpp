#include<iostream>
using namespace std;
class Volume{
	private:
		int l,b,h,v;
	public:
		Volume(){
			cout<<"Enter length, breadth and height "<<endl;
			cin>>l>>b>>h;
		}	
	void volume(){
		v=l*b*h;
		cout<<"Volume = "<<v<<endl;
	}	
};
int main(){
	Volume obj;
	obj.volume();
}
