#include<iostream>
using namespace std;
class Teacher{
	public:
		string name ,dep,college,email;
	Teacher(){
		cout<<"Enter name  dep  colege  Email\n";
		cin>>name;
		cin>>dep;
		cin>>college;
		cin>>email;
	}	
};
class Math:public Teacher
{
	public:
		string qualification,Expertise;
		int sal;
		Math(){
			cout<<"Enter maths Teacher\n";
			cin>>qualification;
			cin>>Expertise;
			cin>>sal;
		}
		 void set_data(){
		 	this->qualification=qualification;
		 	this->Expertise=Expertise;
		 	this->sal=sal;
		 }
		void display(){
			cout<<name<<endl;
	     	cout<<dep<<endl;
	    	cout<<college<<endl;
	    	cout<<email<<endl;
			cout<<qualification<<endl;
			cout<<Expertise<<endl;
			cout<<sal<<endl;
		} 
};
class English:public Teacher
{
	public:
		string qualification,Expertise;
		int sal;
		English(){
			cout<<"Enter English Teacher\n";
			cin>>qualification;
			cin>>Expertise;
			cin>>sal;
		}
		 void set_data(){
		 	this->qualification=qualification;
		 	this->Expertise=Expertise;
		 	this->sal=sal;
		 }
		void display(){
			cout<<name<<endl;
	     	cout<<dep<<endl;
	    	cout<<college<<endl;
	    	cout<<email<<endl;
			cout<<qualification<<endl;
			cout<<Expertise<<endl;
			cout<<sal<<endl;
		} 
};
class science:public Teacher
{
	public:
		string qualification,Expertise;
		int sal;
		science(){
			cout<<"Enter science Teacher\n";
			cin>>qualification;
			cin>>Expertise;
			cin>>sal;
		}
		 void set_data(){
		 	this->qualification=qualification;
		 	this->Expertise=Expertise;
		 	this->sal=sal;
		 }
		void display(){
			cout<<name<<endl;
	     	cout<<dep<<endl;
	    	cout<<college<<endl;
	    	cout<<email<<endl;
			cout<<qualification<<endl;
			cout<<Expertise<<endl;
			cout<<sal<<endl;
		} 
};
int main(){
	Math obj;
	science obj1;
	English obj2;
	obj.set_data();
	obj.display();
	obj1.set_data();
	obj1.display();
	obj2.set_data();
	obj2.display();
	
	
}
