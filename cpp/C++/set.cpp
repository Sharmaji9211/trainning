#include<stdio.h>
#include<iostream>
#include<vector>
#include <set>
using namespace std;

void show(set<int> ms){
	set<int>::iterator it;
	printf("\nContents of mysetm are:");
	for(it=ms.begin(); it!=ms.end(); ++it)
	printf("%d ",*it);
}
int main(){
	vector<int>vac;
	vac.push_back(10);
	vac.push_back(20);
	printf("capacity");
	set<int> myset={2,5,7,4,6,2};
	show(myset);
	printf("\n Size of myset: %d",myset.size());
	myset.insert(10);
	myset.insert(20);
	printf("\n After erasee the element :");
	myset.erase(7);
	 show(myset);
	 printf("\n After clear the set : ");
	 myset.clear();
	 show(myset);
	 set<int> set2={10,20,30,40,50};
	 myset.swap(set2);
	 printf(" \nAfter swap :\n");
	 show(myset);
	 printf("\n%d\n",set2.size());
	 show(set2);
	 auto it =myset.find(7);
	 printf("\n value - %d",*it);
}
