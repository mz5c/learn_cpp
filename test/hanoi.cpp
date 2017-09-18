#include <iostream>
using namespace std;

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
