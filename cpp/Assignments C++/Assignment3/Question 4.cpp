#include<iostream>
using namespace std;
class Area_Box{
	private:
		int l,b,h,v;
	public:
		Area_Box(int l,int b ,int h){	
		this->l=l;
		this->b=b;
		this->h=h;	
		}	
	void area(){
		v=l*b*h;
		cout<<"Area_Box = "<<v<<endl;
	}	
};
int main(){
	Area_Box obj(8,5,7);
	obj.area();
}
