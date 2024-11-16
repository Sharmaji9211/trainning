#include<iostream>
using namespace std;
struct student{
	char name[20];
	int roll;
};
int main(){
	
    int num[25];
	struct student s;
	int *ptrInt=new int[25];
    struct student *ptr=new struct student;
    
    num[0]=10;
    num[20]=19;		
    s.name ="shivam";
    s.roll =25;
    
    ptrInt[0]=50;
    ptrInt[20]=500;
    ptr->name="shivams";
    ptr->roll=54;
    
    cout<<num[0]<<endl<<num[20]<<s.name<<s.roll<<endl;
    cout<<endl<<ptrIntnum[0]<<endl<<ptrIntnum[20]<<ptr->s.name<<ptr->s.roll<<endl;
    
	delete []ptrInt;
	delete ptr;
	return 0;
}
