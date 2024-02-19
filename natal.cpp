#include <iostream>
using namespace std;

struct cartinha{
	string nome;
	string pres;
};

struct brinquedo{
	string nome;
	int qtd;
	int pedida;
};

int main () {
	int carts, brinqs;
	cin >> carts;
	cartinha lista[carts];
	for (int i = 0; i < carts; i++)
	{
		cin >> lista[i].nome;
		cin >> lista[i].pres;
	}
	cin >> brinqs;
	brinquedo lista2[brinqs];
	for (int i = 0; i < brinqs; i++)
	{
		cin >> lista2[i].nome;
		cin >> lista2[i].qtd;
	}
	
	for (int i = 0; i < carts; i++)
	{
		for (int j = 0; j < brinqs; j++)
		{
			if (lista[i].pres == lista2[j].nome)
			{
				lista2[j].qtd--;
			}
		}
		
	}
	
	for (int i = 0; i < brinqs; i++)
	{
		if (lista2[i].qtd < 0)
		{
			cout << lista2[i].nome << " ";
		}
	}
	cout << endl;
	return 0;
}
