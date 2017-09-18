#include<iostream>
using namespace std;

long fac(int n)
{
	long f;
	if (n<0) {
		cout<<"error"<<endl;
		return -1;
	} else if (n==0) {
		f=1;
	} else {
		f=fac(n-1)*n;
	}
	return f;
}
int main()
{
	int n;
	cin>>n;
	cout<<fac(n)<<endl;
	cout<<"hello world"<<endl;
	return 0;
}
