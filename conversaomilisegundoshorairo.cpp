#include <iostream>
using namespace std;
int main (){
	int mili;
	cin >> mili;
	float seg;
	cout << ( mili / 3600000 ) << " " << ':' << " ";
	mili = mili % 3600000;
	cout << ( mili / 60000 ) << " " << ':' << " ";
	mili = mili % 60000;
	seg = mili;
	cout << ( seg / 1000 ) ;
	return 0;
}
