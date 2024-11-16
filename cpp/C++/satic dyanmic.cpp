#include<iostream>
using namespace std;
int main(){
	int i ;
	float a;
	char ch;
	
	
	int *ptrint =new int;
	float *ptrfloat =new float;
	char *ptrchar =new char;
	
	i=25;
	a=13.3f;
	ch='A';
	
	*ptrint=25;
	*ptrfloat=14.1f;
	*ptrchar='B';
	
	cout<<endl<<"i= "<<i;
	cout<<endl<<"a= "<<a;
	cout<<endl<<"ch= "<<ch;
	cout<<endl<<"new int= "<<*ptrint;
	cout<<endl<<"new float= "<<*ptrfloat;
	cout<<endl<<"new char = "<<*ptrchar;
	
	delete ptrint;
	delete ptrfloat;
	delete ptrchar;
}
