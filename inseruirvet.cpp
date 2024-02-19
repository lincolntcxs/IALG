#include <iostream>
using namespace std;

int main () {

	int vet[10];
	for (int i = 0; i < 10; i++)
	{
		vet[i] = 0;
	}
	int k,p,agi, aux, aux2;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> vet[i];
	}
	cin >> agi >> p;
	aux = vet[p];
	vet[p] = agi;
	for (int i = p +1; i < 10; i++)
	{
		aux2 = vet[i];
		vet[i] = aux;
		aux = aux2;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << vet[i] << " ";
	}
	cout << endl;
	return 0;

}

