#include<iostream>
using namespace std;
class emp{
	public:
		int code,basic_Sal;
	void getdetails(){
		cout<<"enter code"<<endl;
		cin>>code;
		cout<<"enter basic salary"<<endl;
		cin>>basic_Sal;
	}
	void calculate_net_sal(){
		float incometax=0;
		float Da=(basic_Sal*.174);
		float Hra=(basic_Sal*.10);
		int Ta=500;	
		if(basic_Sal<=50000)
		{
			float incometax=(basic_Sal*.05);
		}
		else if(basic_Sal>50000)
		{
			float incometax=0;
		}
		float Net_salary=(basic_Sal+Da+Hra+Ta+incometax);
		cout<<"Net Salary= "<<Net_salary;
		
	}	
};
int main(){
	emp obj;
	obj.getdetails();
	obj.calculate_net_sal();
}
