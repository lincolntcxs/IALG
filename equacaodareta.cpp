#include <iostream>
using namespace std;
int main (){
	float x1, x2, y1, y2, m;
	cin >> x1 >> y1 >> x2 >> y2;
	m =((y2 - y1) / (x2 -x1));
	cout << m << endl << (y1 - (m*x1)) << endl;
	return 0;
}
