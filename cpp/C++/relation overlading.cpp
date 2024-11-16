#include<iostream>
using namespace std;
class A{
	private:
	int a,b;
	public:
		int operator>(A &temp){
			if(this-> a > temp.a&&this-> b > temp.b)
			return 1;
			else 
			return 0;
		}
		void set(int x,int y)
		{
			a=x;
			b=y;
		}
//		void get(){
//			cout<<"a ="<<a<<endl;
//			cout<<"b ="<<b<<endl;
//		}
//		A operator >(A &temp){
//			A res;
//			res.a=this->a>temp.a;
//			res.b=this->b>temp.b;
//			return res;
//		}
//		
};
int main (){
	A obj1,obj2;
	obj1.set(40,80);
	obj2.set(10,90);
    int y= obj1>obj2;
    if(y==1)
    cout<<"obj1 is G"<<endl;
    else
    cout<<"obj2 is S"<<endl;

	}
