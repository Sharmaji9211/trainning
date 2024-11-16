#include<iostream>
#include<stdexcept>
#include<exception>
using namespace std;
int main(){
	int x=10,y=0,z;
	try{
		if(y==0)
		throw runtime_error("Divide by Ero error");
		z=x/y;
		cout<<"Result is :"<<z<<endl;
	}
	catch(runtime_error &err){
		cout<<"Exception handling :"<<endl;
		cout<<err.what();
	}
	cout<<"thanks !!"<<endl;
}

