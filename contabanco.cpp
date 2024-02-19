#include <iostream>
using namespace std;

struct cliente{
	int conta;
	string nome;
};

struct transasocoes{
	int conta;
	string descri;
	float valor;
};

int main () {
	
	cliente lista[20];
	cin >> lista[0].conta;
	int i = 0;
	int aux = 0;
	while (lista[i].conta != -1 and i < 20)
	{
		cin >> lista[i].nome;
		i++;
		aux++;
		cin >> lista[i].conta;
	}
	
	transasocoes garu[100];
	i = 0;
	int aux2 = 0;
	cin >> garu[0].conta;
	while (garu[i].conta != -1 and i < 100)
	{
		cin >> garu[i].descri;
		cin >> garu[i].valor;
		i++;
		aux2++;
		cin >> garu[i].conta;
	}
	int num, agi = 0;
	cin >> num;
	i = 0;
	while (num != -1)
	{
		for (int i = 0; i < aux2; i++)
		{
			if (num == garu[i].conta)
			{
				for (int j = 0; j < aux; j++)
				{
					if (num == lista[j].conta and agi == 0)
					{
						cout << lista[j].nome << endl;
						agi++;
					}
				}
				cout << garu[i].descri << " " << garu[i].valor << endl;
				agi++;
			}
		}
		agi = 0;
		cin >> num;
	}
	cout << endl;
	return 0;
}
