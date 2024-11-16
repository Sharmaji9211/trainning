#include<iostream>
using namespace std;
class logic{
	private:
		int x,y;
	public: 
	    void set(int x, int y){
	    	this->x=x;
	    	this->y=y;
		}
		logic add(logic temp1,logic temp2){
		 logic z;
		 z.x=temp1.x+temp2.x;
		 z.y=temp1.y+temp2.y;
		 return z;
		}
		void get(){
			cout<<"sum="<<endl;
			cout<<"x="<<x<<" y"<<y<<endl;
		}
		
};
int main(){
	logic obj1,obj2,obj3;
	obj1.set(10,20);
	obj2.set(30,40);
	logic k= obj3.add(obj1,obj2);
	k.get();
	return 0;
	
}
