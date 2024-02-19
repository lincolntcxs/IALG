#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int num,n1,n2;
	float aux;
	cin >> num;
	aux = num;
	aux = ceil( aux * 2/3);
	n1 = aux;
	aux = num;
	aux = floor( aux * 1/3);
	n2 = aux;
	cout << n1 << endl << n2 << endl;
	return 0;
}
