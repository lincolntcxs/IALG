#include <iostream>
using namespace std;
int main() {
	int dia, hora, minuto, duracao;
	cin >> dia;
	cin >> hora;
	cin >> minuto;
	cin >> duracao;
	
	if ( duracao > 0 )	
		minuto += duracao;
		
	if ( minuto > 59 ) {
		hora += (minuto / 60);
		minuto = minuto % 60;
	}
	
	if ( hora > 23 ) {
		dia += ( hora / 24 );

		hora = hora % 24;
	}
	cout << dia << " " << hora << " " << minuto << endl;
	return 0;
	
}
