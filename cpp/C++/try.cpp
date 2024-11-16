#include<iostream>
#include<stdexcept>
#include<exception>
using namespace std;
int main(){
	try {
		throw runtime_error("Run time Error by Gniot");
	}
	catch(const char *err){
		cout<<"String type :"<<err<<endl;
	}
	catch(int error){
		cout<<"int Type :"<<error<<endl;
	}
	catch(runtime_error &e){
		cout<<"Run Type :"<<e.what()<<endl;
	}
	cout<<"thanks!!";
	return 0;
}
