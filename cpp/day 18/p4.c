#include<stdio.h>
struct date{
	int dd,mm,yy;
};
typedef struct student {
	char name[30];
	int roll;
	float marks;
	struct date day;
}ss;
int main()
{
	ss s1 ={"shivam",54,78.0f,10,02,2000};
	ss s2 ={"shiva",55,88.0f,12,05,2003};
	ss s3 ={"ashu",21,58.0f,15,03,2004};
	printf("name= %s roll= %d marks= %f dob= %d-%d-%d\n",s1.name,s1.roll,s1.marks,s1.day.dd,s1.day.mm,s1.day.yy);
    printf("name= %s roll= %d marks= %f dob= %d-%d-%d\n",s2.name,s2.roll,s2.marks,s2.day.dd,s3.day.mm,s2.day.yy);
    printf("name= %s roll= %d marks= %f dob= %d-%d-%d\n",s3.name,s3.roll,s3.marks,s3.day.dd,s3.day.mm,s3.day.yy);
}

