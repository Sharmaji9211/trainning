#include<iostream>
using namespace std;
class time{
	int hh,mm,ss;
	public:
      fun(){
    	cout<<"enter hours"<<endl;
    	cin>>hh;
    	cout<<"enter minutes"<<endl;
    	cin>>mm;
    	cout<<"enter seconds"<<endl;
    	cin>>ss;
    	hh=hh*60*60;
    	mm=mm*60;
    	cout<<hh+mm+ss;
	}		
};
int main (){
	 time obj;
    obj.fun();
}

 
 
