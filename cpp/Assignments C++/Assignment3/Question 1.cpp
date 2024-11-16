#include<iostream>
using namespace std;
class Area{
	private:
		int l,b,r;
	public:
		Area(){
			cin>>l>>b;
		}
	void area(){
		r=l*b;
		cout<<"Area = "<<r<<endl;
	}		
};
int main(){
	Area obj;
	obj.area();

}
