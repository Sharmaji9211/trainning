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
	 	if(1000<=price<=10000){
	 		cout<<brand<<endl;
	 	    cout<<price<<endl;
	 	    cout<<color<<endl;
		 }
		 int count=0;
	 	for(int i=0;i<2;i++){
	 		if(price>5000)
	 		count++;
		 }
	 	cout<<count<<endl;
	 	
	 }		
};
int main(){
	Mobile obj[5];
	int i;
	for(i=0;i<5;i++){
		obj[i].get();
	obj[i].dispaly();
	}
}
