#include<stdio.h>
struct student {
	char name[30];
	int roll;
	float marks;
};
int main()
{
	struct student s1 ={"shivam",54,78.0f};
	struct student s2 ={"shiva",55,88.0f};
	struct student s3 ={"ashu",21,58.0f};
	printf("name= %s roll= %d marks= %f\n",s1.name,s1.roll,s1.marks);
	printf("name= %s roll= %d marks= %f\n",s2.name,s2.roll,s2.marks);
    printf("name= %s roll= %d marks= %f\n",s3.name,s3.roll,s3.marks);
}

