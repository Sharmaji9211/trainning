#include<iostream>
using namespace std;
class grandpa
{
	public:
   grandpa(){
   	cout<<"grandpa class"<<endl;
   }  
};
class papa:public grandpa{
	public:
		papa(){
			cout<<"papa class"<<endl;
		}
};
class pappu:public papa{
	public:
		pappu(){
			cout<<"pappu class"<<endl;
		}
		pappu(int x){
			cout<<"pappu agr 1"<<endl;
		}
		~pappu(){
			cout<<"pappu Des"<<endl;
		}
};
int main(){
	pappu obj(10);
}
