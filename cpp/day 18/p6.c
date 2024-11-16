#include<stdio.h>
struct student {
	char name[30];
	int roll;
	float marks;
	
};
void fun(struct student s);

int main()
{
	struct student s1 ={"shivam",54,78.0f,10,02,2000};
	struct student s2 ={"shiva",55,88.0f,12,05,2003};
	struct student s3 ={"ashu",21,58.0f,15,03,2004};
	fun(s1);
	return 0;
}
	void fun(struct student s){
	
	printf("name= %s roll= %d marks= %f \n",s.name,s.roll,s.marks);
    //printf("name= %s roll= %d marks= %f dob= %d-%d-%d\n",s2.name,s2.roll,s2.marks,s2.day.dd,s3.day.mm,s2.day.yy);
    //printf("name= %s roll= %d marks= %f dob= %d-%d-%d\n",s3.name,s3.roll,s3.marks,s3.day.dd,s3.day.mm,s3.day.yy);
}


