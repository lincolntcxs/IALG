#include <iostream>
using namespace std;

struct funcio{
	int id;
	float valor;
};

int main () {
	float sal;
	cin >> sal;
	funcio lista[10];
	int i = 0, aux = 0;
	cin >> lista[i].id;
	while (lista[i].id >= 0)
	{
		cin >> lista[i].valor;
		i++;
		aux++;
		cin >> lista[i].id;
	}
	int ide, indi;
	cin >> ide >> indi;
	float soma = 0, aux3 = 0;;
	
	for (int i = 0; i < aux; i++)
	{
		for (int j = 1; j < aux; j++)
		{
			if (lista[i].id == lista[j].id)
			{
				soma = lista[j].valor + soma;
			}
		}
		if (soma  != aux3 )
		{
		cout << lista[i].id << (soma * 0.06) + sal;
		}
		aux3 = soma;
	}
	
	
	
	cout << endl;
	return 0;
}
