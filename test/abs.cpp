#include<iostream>
using namespace std;

template<typename T>
T abs(T x)
{
	return x<0 ? -x:x;
}

int main()
{
	int n=-12;
	double d=-2.2;
	cout<<abs(n)<<endl;
	cout<<abs(d)<<endl;
	return 0;
}
