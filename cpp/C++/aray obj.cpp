#include<iostream>
using namespace std;
class logic{
	private:
		int arr[10];
	public:	 
	  void set(){
	   for(int i=0;i<10;i++){
	   	cin>>arr[i];
	   }
     }
	   void get(){
	   for(int i=0;i<10;i++){
	   	cout<<arr[i]<<endl;
	   }
     }
};
int main(){
	logic obj[3];
	for(int i=0;i<3;i++){
		obj[i].set();
	    obj[i].get();
	}
	
	return 0;
}

