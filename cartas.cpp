#include <iostream>
using namespace std;

int main () {

	int cartas = 0, posInicial = 0, meio, posFinal = 0;
	
	cin >> cartas;
	cin >> posInicial;
	meio = cartas/2;
	
	if (posInicial < meio) 
		posFinal=posInicial*2 +1 ;
	else
		if(cartas % 2 == 0)
			posFinal = 2 * posInicial - cartas;
		else
			posFinal = 2 * posInicial - cartas + 1;

	cout << posFinal << endl;
	return 0;

}
