#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	enum game_result {WIN, LOSE, TIE, CANCEL};
	game_result xxx = TIE;
	cout<<xxx<<endl;
	return 0;
}
