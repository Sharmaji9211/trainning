#include<iostream>
using namespace std;
 class logic {
 	public:
 		int x,y,z;
 		logic(){
 			cout<<"0 arg"<<endl;
		 }
		logic(int a){
			z=a;
 			cout<<"1 arg"<<endl;
		 }
		logic(int a ,int b){
			x=a;
			y=b;
 			cout<<"2 arg";
		 }
		~logic(){
			cout<<"des"<<endl;
		}    
 };
 int main(){
 	logic obj();
 	logic obj1(10);
 	logic obj2(10,11);
 }
