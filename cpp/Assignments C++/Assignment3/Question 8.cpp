#include<iostream>
using namespace std;
class emp{
	private:
		int empcode,basic_sal;
		char name[20];
    public:
	   emp(){
	   	cout<<"enter empcode\n name\n basic_sal"<<endl;
	   	cin>>empcode>>name>>basic_sal;
	   	cout<<"Emp code= "<<empcode<<endl;
	   	cout<<"Emp Name= "<<name<<endl;
	   	cout<<"Emp basic_sal= "<<basic_sal;
	   }		
};
int main(){
	emp obj;
}
