#include<iostream>
using namespace std;
class Atm{
	private:
		string name;
		long int account_no;
		long int balance =0;
		long int amount =0;
    public: 
    void setvalue(){
    	cout<<"Enter name \n";
    	cin.ignore();
    	getline(cin,name);
    	cout<<"enter Account no.\n";
    	cin>>account_no;
    	cout<<"enter Balance\n";
    	cin>>balance;
	}
	void showdata(){
		cout<<"Name: "<<name<<endl;
		cout<<"Account no: "<<account_no<<endl;
		cout<<"Balance"<<balance<<endl;
			}
	void deposit()	{
		cout<<"\n Enter amount to be  deposit\n";
		cin>>amount;
	}	
	void showbalance()	{
		balance =balance+amount;
		cout<<"total balance is"<<balance;
	
	}	
    void withdrawal()
	{
		int a, avai_balance;
		cout<<" Enter amount to withdrawal_amount\n";
    	cin>>a;
		if(a<=balance&&a>0){
    		balance=(balance-a);
    		cout<<"Balance:"<<balance;
		}
		else 
		cout<<"Not enough balance";
    	
	}		
};
int main(){
	Atm b;
	int choice;
	while(1){
		cout<<"\n";
		cout<<"enter your choice\n";
		cout<<"1 Name account_no.\n";
		cout<<"2 Balance\n";
		cout<<"3 Deposit\n";
		cout<<"4 show \n";
		cout<<"5  withdraw \n";
		cout<<"6 Cancle\n";
		cin>>choice;
		
		switch(choice){
			case 1:
				b.setvalue();
				break;
			case 2:
				b.showdata();
				break;
			case 3:
				b.deposit();
				break;
			case 4:
				b.showbalance();
				break;
			case 5:
				b.withdrawal();
				break;
			case 6:
			    exit(1);
				break;
			default :
			   cout<<"\n invalid choice";			
		}
	}
}
