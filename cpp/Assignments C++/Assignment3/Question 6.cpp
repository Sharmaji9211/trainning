#include<iostream>
using namespace std;
class Mobile{
	private:
		string brand,color;
		float price,width,height;
    public:	
     Mobile(){
     	cout<<"Enter Brand Price color width height ";
	 	cin>>brand;
	 	cin>>price;
	 	cin>>color;
	 	cin>>height;
	 	cin>>width;
	 	
	 }
	 void get(){
	 	this->brand=brand;
	 	this->price=price;
	 	this->color=color;
	 	this->height=height;
	 	this->width=width;
	 }
	 void dispaly(){
	 	cout<<brand<<endl;
	 	cout<<price<<endl;
	 	cout<<color<<endl;
	 	cout<<height<<endl;
	 	cout<<width<<endl;
	 	
	 }		
};
int main(){
	Mobile obj;
	obj.get();
	obj.dispaly();
}
