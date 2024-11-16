#include<iostream>
#include<vector>
using namespace std;
class solution {
	public:
		vector<int> leader(int n, int arr[]){
		vector<int> temp;
		int max = arr[n-1];
		temp.push_back(max);{
		for(int i=n-2;i>=0;i--){
			if(arr[i]<max)
		     continue;
		max= arr[i];
		temp.push_back(max);
		}
		reverse(temp.begin(),temp.end())
		return temp;
	}
};
