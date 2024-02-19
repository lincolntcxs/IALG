#include <iostream>
using namespace std;

struct gnomo{
	string nome;
	int ent[7];
	int sai[7];
};

int main () {
	int qtd, trab = 0;
	cin >> qtd;
	gnomo lista[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin >> lista[i].nome;
		for (int j = 0; j < 7; j++)
		{
			cin >> lista[i].ent[j];
			cin >> lista[i].sai[j];
		}
	}
	
	for (int i = 0; i < qtd; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			trab = lista[i].sai[j] - lista[i].ent[j] + trab;
		}
		if (trab < 70)
		{
			cout << lista[i].nome << " " << trab << endl;
		}
		trab = 0;
	}
	cout <<  endl;
	return 0;
}
