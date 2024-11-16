#include<iostream>
using namespace std;
class B{
	int b;
	public:
		B()
		{
		}
		B(int n){
			b=n;		
			}
	    B(B &temp){
	    	this->b = temp.b;
		} 
      void show()
{
	cout<<"b= "<<b<<endl;
}
};
int main (){
	B obj1(40);
	B obj2(obj1);
	obj1.show();
	obj1.show();
}
