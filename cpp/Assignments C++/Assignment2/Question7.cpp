#include<iostream>
using namespace std;
class student{
  private:
   int student_id,s1,s2,s3,s4,s5;	
   char branch[20];
   int total;
   float percentage;
   public:
   	void getdetails(void);
   	void putdetails(void);
};
   void student::getdetails(void){
   	   cout<<"studentd_id"<<endl;
   	   cin>>student_id;
   	   cout<<"branch"<<endl;
   	   cin>>branch;
   	   cout<<"subject 1"<<endl;
   	   cin>>s1;
   	   cout<<"subject 2"<<endl;
   	   cin>>s2;
   	   cout<<"subject 3"<<endl;
   	   cin>>s3;
   	   cout<<"subject 4"<<endl;
   	   cin>>s4;
   	   cout<<"subject 5"<<endl;
   	   cin>>s5;
   	   total=(s1+s2+s3+s4+s5);
   	   percentage= (float)total/500*100;
		  }
   	   void student::putdetails(void)
		  {
   	   	cout<<total<<endl;
   	   	cout<<"percentage:"<<percentage<<endl;
   	   	if(percentage>75)
   	   	cout<<"first";
   	   	else if(percentage<75&&percentage>=60)
   	   	cout<<"second";
   	   	else if(percentage<60&&percentage>=50)
   	   	cout<<"third";
   	   	else if(percentage<50&&percentage>=33)
   	   	cout<<"pass";	
   }
int main(){
	student obj;
	obj.getdetails();
	obj.putdetails();
}
