#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int num;
	cin >> num;
	float aux = num;
	aux = ceil((aux / 6));
	num = aux;
	cout << num << endl;
	return 0;
}
