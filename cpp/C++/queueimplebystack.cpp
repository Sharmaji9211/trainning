#include<iostream>
#include<queue>
using namespace std;
class Stack{
	public:
	queue<int> q;
	void push(int val){
		q.push(val);
	}
	int pop(){
		for(int i=0;i<q.size()-1;i++)
		{
			int a=q.front();
			q.push(a);
			q.pop();
		}
		int a=q.front();
		q.pop();
		return a;
	}
	
	int top(){
	return q.back();	
	}
	int size(){
	  return q.size();	
	}
	bool empty(){
		return q.empty();
	}
};
int main(){
	Stack s1;
	s1.push(12);
	s1.push(14);
	s1.push(15);
	cout<<s1.top();
	s1.pop();
	cout<<s1.top();
	
}
