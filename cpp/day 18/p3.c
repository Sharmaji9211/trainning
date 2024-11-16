#include<stdio.h>
struct student {
	char name[30];
	int roll;
	float marks;
};
int main()
{ 
    int i;
	struct student a[5];
    for(i=0;i<5;i++){
	scanf("%s",&a[i].name);
	scanf("%d",&a[i].roll);
	scanf("%f",&a[i].marks);
}
    for(i=0;i<5;i++){
    	printf("name= %s roll= %d marks= %f\n",a[i].name,a[i].roll,a[i].marks);
	
	}
	
}

