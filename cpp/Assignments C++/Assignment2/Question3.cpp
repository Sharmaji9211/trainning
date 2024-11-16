#include<iostream>
using namespace std;
class Add{
	private :
	int num1,num2,sum,sub,multi,div;
	public:
		void input(){
			cout<<"enter numbers "<<endl;
			cin>>num1>>num2;	
		}
		void calculate_sum(){
			sum =num1+num2;
		}
		void calculate_sub(){
			sub =num1-num2;
		}
		void calculate_multi(){
			multi =num1*num2;
		}
		void calculate_div(){
			div =num1/num2;
		}
		void output(){
			cout<<sum<<endl;
			cout<<sub<<endl;
			cout<<multi<<endl;
			cout<<div<<endl;
		}
};
int main(){
	Add obj;
	obj.input();
	obj.calculate_sum();
	obj.calculate_sub();
	obj.calculate_multi();
	obj.calculate_div();
	obj.output();
}
