#include <iostream>

using namespace std;
/**
* 将数组内的数据所有排列打印输出
* 思路还是递归
*/
void printRes(char a[],int ac){
    for(int i = 0; i < ac; i++){
        cout<<a[i];
    }
    cout<<endl;
}
void listAll(char a[],int ac ,int n,int m){
    if(n == m){
        printRes(a,ac);
    }else{
        for(int i = n; i <= m; i++){
            swap(a[n],a[i]);
            listAll(a,ac,n+1,m);
            swap(a[n],a[i]);
        }
    }
}
int main()
{
    int a=1,b=2;
    swap(a,b);
    cout<<a<<' '<<b<<endl;
    char c[7] = {'a','b','c','d','e','f','g'};
    listAll(c,7,0,6);
    cout << "Hello world!" << endl;
    return 0;
}
