#include<iostream>
using namespace std;

struct student
{
	int num;
	char name[20];
	char sex;
	int age;
}stu={12312,"klfjd",'f',10};

int main()
{
	int a[5] = {1,2,3,4,5};
	int *p1 = a;
	int *p2;
	p2 = p1;
	cout<<a<<p1<<p2<<endl;
	cout<<stu.num<<endl;
	cout<<"hello"<<endl;
	return 0;
}
