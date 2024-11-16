#include<iostream>
#include<stdexcept>
#include<exception>
#include<windows.h>
using namespace std;
class OverSpeed : public exception {
	int speed;
	public:
		const char *what(){
		  return "check out car speed";
		}
	void getspeed(){
		cout<<"your cad speed is :"<<speed<<endl;
	}
	void setspeed(int speed){
		this->speed=speed;
	}		
};
class car {
	int speed;
	public:
		car(){
			speed=0;
			cout<<"car is speed"<<speed<<endl;
		}
	void speedlimit(){
		for( ; ;){
			speed =speed+10;
			cout<<"car is speed"<<speed<<endl;
			Sleep(2000);
			if(speed>250){
				OverSpeed s;
				s.setspeed(speed);
				throw s;
				
			}
		}
	}
};
int main(){
	car ob;
	try {
		ob.speedlimit();
	}
	catch(OverSpeed &s){
		cout<<s.what()<<endl;
		s.getspeed();
	}
}
