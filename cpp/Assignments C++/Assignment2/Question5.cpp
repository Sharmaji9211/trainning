#include<iostream>
using namespace std;
class A{
	int id,sem;
	char name[20],branch[20];
	public:
		void student(){
			cout<<"std id"<<endl;
			cin>>id;
			cout<<"enter name "<<endl;
			cin>>name;
			cout<<"enter sem "<<endl;
			cin>>sem;
			cout<<"enter branch "<<endl;
			cin>>branch;
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<sem<<endl;
			cout<<branch<<endl;
			
			}
};
int main(){
	A obj;
	obj.student();
}
