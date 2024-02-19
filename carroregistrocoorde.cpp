#include <iostream>
using namespace std;

struct carro{
	float corx;
	float cory;
	float velx;
	float vely;
};

int main () {
	float tempo;
	carro lista[1];
	cin >> lista[0].corx;
	cin >> lista[0].cory;
	cin >> lista[0].velx;
	cin >> lista[0].vely;
	cin >> tempo;
	lista[0].corx = (tempo * lista[0].velx) + lista[0].corx;
	lista[0].cory = (tempo * lista[0].vely) + lista[0].cory;
	
	cout << lista[0].corx << " " << lista[0].cory << endl;

	return 0;
}
