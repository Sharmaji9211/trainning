#include<iostream>
using namespace std;
class Logic {
	public:
		int nsd;
		static int sd;
		void nsm(){
			cout<<"Non static method"<<endl;
			cout<<"Non static data = "<<nsd<<endl;
			cout<<"static data = "<<sd<<endl;
		}
		static void sm(){
			cout<<"static method"<<endl;
		}
		void set()
		{
			nsd=10;
		}
};
 int Logic::sd=500;
 int main(){
 	Logic obj;
 	obj.set();
 	obj.nsm();
 	return 0;
 }
