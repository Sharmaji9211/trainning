#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> &stack1){
	while(!stack1.empty())
	{
		cout<<stack1.top()<<" ";
		stack1.pop();
	}
}
int main()
{
	stack<int> stack1;
	stack1.push(10);
	stack1.push(20);
	stack1.push(30);
	stack1.push(40);
	stack1.push(50);
	display(stack1);
	cout<<"\nsize"<<stack1.size();
}
