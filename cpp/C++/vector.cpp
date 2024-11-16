#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> temp_vac){
	for(i=0;i<temp_vac.size();i++)
	cout<<temp_vac[i]<<" ";
}
int main(){
	vector<int> vac1;
	vac1.push_back(12);
	cout<<"size: "<<vac1.size();
	return 0;
}
