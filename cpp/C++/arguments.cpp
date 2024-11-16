#include<iostream>
using namespace std;
int add(int, int, int c=10,int d=9 );
int main ()
{
	int s1,s2,s3;
	s1=add(2,3);
	s2=add(1,2,3);
	s3=add(1,2,3,4);
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
}
int add(int x,int y, int z,int e)
{
	return x+y+z+e;
}
