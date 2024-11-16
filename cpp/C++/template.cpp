#include<iostream>
using namespace std;
int min (int a,int b){
	return (a<b)?a:b;
}
float min(float a, float b){
		return (a<b)?a:b;
}
char  min(char a, char b){
		return (a<b)?a:b;
}
int main(){
	cout<<min(10,20)<<endl;
	cout<<min(11.5f,20.2f)<<endl;
	cout<<min('A','B')<<endl;
}

