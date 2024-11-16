#include<iostream>
#include<stdexcept>
using namespace std;
int main (){
	int age;
	cout<<"enter age";
	cin>>age;
	cout<<"before try"<<endl;
	try{
		cout<<"inside try"<<endl;
		if(age<0){
			throw age;
			cout<<"After throw (never expected)";
		}
	}
	catch(int age){
		cout<<"Exception caught: invalid age="<<age<<endl;
	}
	cout<<"After catch (will be executed)"<<endl;
	return 0;
}
