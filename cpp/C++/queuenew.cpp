#include<iostream>
#include<queue>
using namespace std;
void showq(queue<int> g)
{
	while(!g.empty()){
		printf("%d ",g.front());
	    g.pop();
	}
	    
}
int main(){
	queue<int> queue1;
	queue1.push(10);
	queue1.push(20);
	queue1.push(30);
	
	printf("the queue is : ");
	showq(queue1);
	return 0 ;
}

