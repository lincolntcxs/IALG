#include <iostream>
using namespace std;
int main (){
	int valor;
	cin >> valor;
	cout << valor / 100 << endl;
	valor = valor % 100;
	cout << valor / 50 << endl;
	valor = valor % 50;
	cout << valor / 20 << endl;
	valor = valor % 20;
	cout << valor / 10 << endl;
	valor = valor % 10;
	cout << valor / 5 << endl;
	valor = valor % 5;
	cout << valor / 2 << endl;
	valor = valor % 2;
	cout << valor / 1 << endl;
	return 0;
}
