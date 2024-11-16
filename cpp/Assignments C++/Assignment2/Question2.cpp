#include<iostream>
using namespace std;
class Area {
	float length,breath;
	public:
	    void setDim(){
		
			cin>>length;
			cin>>breath;
		}
		float getArea(){
			return length*breath;
				
		}
};
int main(){
	Area obj;
	obj.setDim();
    cout<<obj.getArea();
}
