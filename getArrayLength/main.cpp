#include <iostream>
#define GET_ARRAY_LEN(a,len){len=(sizeof(a))/(sizeof(a[0]));}
using namespace std;
// ģ�弰�꺯��ʹ��
template <class T>
int getArrayLength(T& a){
    return (sizeof(a)/sizeof(a[0]));
}
int main()
{
    char a[] = {'1','2','3'};
    int len;
    GET_ARRAY_LEN(a,len);
    cout<<len<<endl;
    cout<<getArrayLength(a)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
