#include <iostream>
using namespace std;
int main (){
	int valor, compra, troco;
	cin >> valor >> compra;
	troco = valor - compra;
	cout << troco / 20 << endl;
	troco = troco % 20;
	cout << troco / 10 << endl;
	troco = troco % 10;
	cout << troco / 5 << endl;
	troco = troco % 5;
	cout << troco / 2 << endl;
	troco = troco % 2;
	cout << troco / 1 << endl;
	return 0;
}
