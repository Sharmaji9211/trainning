#include<iostream>
using namespace std;
class Logic {
	public:
		void nsm(){
		cout<<"Non static method"<<endl;
		}
		static void sm(){
			cout<<"static method"<<endl;
		}
		static void newnsm()
		{
			sm();
		}
};
 int main(){
 	Logic obj;
 	obj.newnsm();
 	return 0;
 }
