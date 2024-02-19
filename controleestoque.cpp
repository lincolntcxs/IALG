#include <iostream>
using namespace std;

struct produto{
	int tipo;
	float preco;
	int qtd;
	string  depo;
};

int main () {
	produto lista[60];
	int i = 0, tam = 0;
	cin >> lista[i].tipo;
	while (lista[i].tipo != 0)
	{
		cin >> lista[i].preco;
		cin >> lista[i].qtd;
		cin >> lista[i].depo;
		tam++;
		i++;
		cin >> lista[i].tipo;
	}
	int venda, exc = 0;
	i = 0;
	cin >> venda;
	while (venda != 0 and exc == 0)
	{
		
		for (int i = 0; i < tam; i++)
		{
			if (lista[i].tipo == venda)
			{
				lista[i].qtd--;
			}
		}
		for (int i = 0; i < tam; i++)
		{
		
			if (lista[i].qtd <= 0)
			{
				exc++;
				cout << "erro 3221" << endl;
			}
			if (exc == 0)
			{
				i++;
				cin >> venda;
			}
		}
	}
	if (exc == 0)
	{
	int menor = lista[0].qtd, men = 0;
	for (int i = 0; i < tam; i++)
	{
		if (lista[i].qtd < menor)
		{
			men = i;
		}
	}
	cout << lista[men].tipo << " " << lista[men].qtd << " " << lista[men].depo << endl;
	}
	return 0;
}
