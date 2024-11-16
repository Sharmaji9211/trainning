#include<iostream>
#include<stdexcept>
#include<exception>
using namespace std;
int main(){
	try{
		throw 5.6f;
		throw "student_Rajeev";
		throw 10;
		throw 'A';
	}
	catch(char e){
		cout<<"exception: "<<"char type";
	}
	catch(int e){
		cout<<"exception: "<<"int type";
	}
	catch(const char *trainer){
		cout<<"Rajeev is handle ";
	}
	catch(...){
		cout<<"exception: "<<"float is handle";
	}
}
