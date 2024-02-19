#include <iostream>
using namespace std;
int main (){
	float n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int p1, p2, p3;
	cin >> p1 >> p2 >> p3;
	cout << ((n1 * p1) + (n2 * p2) + (n3 * p3))/(p1 + p2 + p3) << endl;
	return 0;
}
