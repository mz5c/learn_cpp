#include <iostream>

using namespace std;
/**
* 汉诺塔问题
* 递归方法解决，参考过网上其他博客解法
* 以下为个人编码过程
*/
int pcount = 1;
void move(int n, char from, char to){
    cout<<pcount++<<':'<<"move "<<n<<" from "<<from<<" to "<<to<<endl;
}
void hanoi(int n, char from , char to, char by){
    if(n == 1){
        move(n,from,to);
    }else{
        hanoi(n-1,from,by,to);
        move(n,from,to);
        hanoi(n-1,by,to,from);
    }
}
int main()
{
    cout<<"input n : ";
    int n;
    cin>>n;
    hanoi(n,'A','C','B');
    cout << "Hello world!" << endl;
    return 0;
}
