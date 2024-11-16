#include<iostream>
#include<stdexcept>
using namespace std;
int main (){
	string str ="at Gniot college\n";
	cout<<"welcome \n";
	cout<<"students  \n";
	try
	{
	cout<<string("Trian your brain\n").substr(33);	
	}
	catch(out_of_range &e){
		cout<<"custom message";
	}
	cout<<str;
	throw out_of_range("exception\n ");
	cout<<string("Trian your brain\n").substr(3);
	cout<<string("\nHug your bug\n ");
	cout<<"Thanks\n";
	return 0;
}

